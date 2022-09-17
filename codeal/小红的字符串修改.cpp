#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
int k;
string s;
int a[200010];
int ch(char c)
{
    for(int i=1;i<=s.size();i++)
    a[i]=abs((int)c-(int)s[i-1])+a[i-1];
    int ans=1e18;
    for(int i=k;i<=s.size();i++)
    ans=min(ans,a[i]-a[i-k]);
    return ans;
}
signed main() {
    cin>>k>>s;
    int ans=1e9;
    for(int i=1;i<=26;i++)
        ans=min(ans,ch('a'+i-1));
    cout<<ans<<endl;
}
