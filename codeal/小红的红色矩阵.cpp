#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int mod=1e9+7;
int n,m;
string s[1010];
int p[1010*1010];
int find(int x){return p[x]==x?x:(p[x]=find(p[x]));}
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
signed main() {
    cin>>n>>m;
    for(int i=1;i<=n*m;i++)p[i]=i;
    for(int i=1;i<=n;i++)
    cin>>s[i],s[i]=" "+s[i];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(s[i][j]=='R')
            {
                for(int k=0;k<4;k++)
                {
                    int x=i+dx[k],y=j+dy[k];
                    if(x>=1&&x<=n&&y>=1&&y<=m&&s[x][y]=='R')
                    {
                        p[find((i-1)*m+j)]=find((x-1)*m+y);
                    }
                }
            }
            int res=0;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    {
        if(s[i][j]=='R'&&p[(i-1)*m+j]==(i-1)*m+j)res++;
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
        if(s[i][j]=='W')
        {
            set<int>ss;
            for(int k=0;k<4;k++)
                {
                    int x=i+dx[k],y=j+dy[k];
                    if(x>=1&&x<=n&&y>=1&&y<=m&&s[x][y]=='R')
                    {
                        ss.insert(find((x-1)*m+y));
                    }
                }
                int add=ss.size();
            ans=(ans+res+1-add)%mod;
        }
        else ans=(ans+res)%mod;
        cout<<ans<<endl;
}
