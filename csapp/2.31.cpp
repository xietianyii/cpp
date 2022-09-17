/*arguments can de added without overflow*/
#include<bits/stdc++.h>
int uadd_ok(int x,int y){
    int sum=x+y;
    return (sum-x)==y&&(sum-y==x);
} 
int main()
{
    int x,y;
    std::cin>>x>>y;
    std::cout<<uadd_ok(x,y)<<'\n';
}//-1073741824 -1073741824 2^(w-2)+2^(w-2)=2^(w-1)-2^w=-2^(w-1) 
//1073741824 1073741824