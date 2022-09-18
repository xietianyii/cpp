#include<bits/stdc++.h>
using namespace std;
int div16(int x)
{
    return (x+((x>>31&1)<<4)-(x>>31&1))>>4;
}
int main()
{
    for(int i=1<<31;i<=10000;i++)
    {
        if(i/16!=div16(i))cout<<i/16<<' '<<div16(i)<<endl;
    }
    
}