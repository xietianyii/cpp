#include<bits/stdc++.h>
using namespace std;
int bis(int x,int m)
{
    int z=x;
    for(int i=30;i>=0;i--)
    if(m>>i&1)
    z|=1<<i;
    return z;
}
int bic(int x,int m)
{
    int z=x;
    for(int i=30;i>=0;i--)
    if((m>>i&1)&&(z>>i&1))z-=1<<i;
    return z;
}
int bool_or(int x,int y)
{
    return bis(x,y);
}
int bool_and(int x,int y)
{
    return bic(x,~y);
}
int bool_xor(int x,int y)
{
    return bis(bic(x, y), bic(y, x));
}

int main()
{
    int x,y,num=1000;
    while(num--)
    {
        x=rand();
        y=rand();
        cout<<"and: "<<x<<' '<<y<<' '<<(x&y)<<' '<<bool_and(x,y)<<' '<<((x&y)==bool_and(x,y))<<endl;
        cout<<"or: "<<x<<' '<<y<<' '<<(x|y)<<' '<<bool_or(x,y)<<' '<<((x|y)==bool_or(x,y))<<endl;
        cout<<"xor: "<<x<<' '<<y<<' '<<(x^y)<<' '<<bool_xor(x,y)<<' '<<((x^y)==bool_xor(x,y))<<endl;
    }
}