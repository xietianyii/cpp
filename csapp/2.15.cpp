#include<bits/stdc++.h>
using namespace std;
int check(int x,int y)
{
    return !(x^y);
}
int main()
{
    int x,y;
    while(cin>>x>>y)
    {
        cout<<check(x,y)<<endl;
    }
}