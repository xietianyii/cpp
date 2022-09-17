#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int a[N],n,k;
void solve()
{
    cin>>n>>k;
    map<int,int>h;
    for(int i=1;i<=n;i++)
    cin>>a[i],h[a[i]]++;
    vector<int>aa,bb;
    for(auto it:h)aa.push_back(it.first),bb.push_back(it.second);
    for(int r=0,l=0,sum=0;r<aa.size();r++)
    {
        sum+=bb[r];
        while(sum>k)
        {
            sum-=bb[l++];
        }
        if(sum==k)
        {
            cout<<aa[l]<<' '<<aa[r]<<endl;
            return ;
        }
    }
    cout<<-1<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    } 
}