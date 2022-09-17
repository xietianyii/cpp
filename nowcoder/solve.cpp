#include<bits/stdc++.h>
using namespace std;
#define int long long
string ntos(long long num)
{
    int f=0;
    if(num<0)
    {
        num=-num;
        f=1;
    }
    string s;
    while(num)
    {
        s.push_back(num%10+'0');
        num/=10;
    }
    reverse(s.begin(),s.end());
    if(f)s="-"+s;
    return s;
}
template<typename T>
class vector_print
{
public:
    vector<T>a;
    vector_print(vector<T>_):a(_){}
};
template<typename T>
ostream& operator<<(ostream& c,vector_print<T>& pr)
{
        c<<'[';
        for(int i=0;i<pr.a.size();i++)
        {
        c<<pr.a[i];
        if(i!=pr.a.size()-1)c<<',';
        }
        c<<']';
        return c;
}
ostream& operator<<(ostream& c,vector_print<string>& pr)
{
        c<<'[';
        for(int i=0;i<pr.a.size();i++)
        {
        c<<'"'<<pr.a[i]<<'"';
        if(i!=pr.a.size()-1)c<<',';
        }
        c<<']';
        return c;
}
template<typename T>
class vector_vector_print
{
public:
    vector<vector<T>>a;
    vector_vector_print(vector<vector<T>>_):a(_){}
};
template<typename T>
ostream& operator<<(ostream& os,vector_vector_print<T>&pr){
    os<<'[';
    for(int i=0;i<pr.a.size();i++)
    {
        vector_print<T> a(pr.a[i]);
        os<<a;
        if(i!=pr.a.size()-1)os<<',';
    }
    os<<']';
    return os;
}
// const int rrr[2][13] = {{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
// bool isr(int x)
// {
//     if(x%400==0)return 1;
//     if(x%100!=0&&x%4==0)return 1;
//     return 0;
// }
// class r
// {
// public:
//     r(string s)
//     {
//         int now=0;
//         for(int i=0;i<4;i++)now=now*10+s[i]-'0';year=now;now=0;
//             for(int i=5;i<7;i++)now=now*10+s[i]-'0';mon=now;now=0;
//                 for(int i=8;i<10;i++)now=now*10+s[i]-'0';day=now;now=0;
//         ans=0;
//         for(int i=1000;i<year;i++)
//             if(isr(i))ans+=366;
//             else ans+=365;
//         for(int i=1;i<mon;i++)
//             ans+=rrr[isr(year)][i];
//         ans+=day;
//     }
//     int year,mon,day,ans;
// };
// int n,m;
// double maxx(double a,double b,double c)
// {
// 	return max(max(a,b),c);
// }
// double minn(double a,double b,double c)
// {
// 	return min(min(a,b),c);
// }
// class node
// {
// public:
//     int x,y;
//     bool operator<(node a)
//     {
//         return x<a.x;
//     }
// }a[200100];

// signed main()
// {
// 	cin>>n>>m;
//     int sum=0;
// 	for(int i=1;i<=n;i++)cin>>a[i].x;
//     for(int i=1;i<=n;i++)cin>>a[i].y,sum+=a[i].y;
// 	sort(a+1,a+1+n);
//     if(sum<m){
//         cout<<-1<<endl;
//         return 0;
//     }
//     int ans=1e18;
//     for(int r=1,l=1,sum=0;r<=n;r++)
//     {
//         sum+=a[r].y;
//         while(sum>=m)
//         {
//             ans=min(ans,a[r].x-a[l].x);
//             sum-=a[l].y;
//             l++;
//         }
//     }
//     cout<<ans<<endl;
// }

// string s;
// int n,d,a[200010],m,sum[200010];
// int len(int x)
// {
//     int ans=0;
//     while(x)
//     {
//         ans++;
//         x/=10;
//     }
//     return ans;
// }
// bool cmp(int a,int b)
// {
//     int x=sum[a+d-1]-sum[a-1];
//     int y=sum[b+d-1]-sum[b-1];
//     int lena=len(x),lenb=len(y);
//     if(lena!=lenb)return lena<lenb;
    
// }
// signed main()
// {
//     cout<<0<<endl;
// }
// signed main()
// {
//     int n;
//     cin>>n;
//     vector<vector<int>>a(n+1,vector<int>(n+1));
//     for(int i=1;i<=n;i++)
//         for(int j=1;j<=n;j++)
//             cin>>a[i][j];
//     int ans=0;
//     for(int i=1;i<=n;i++)
//         for(int j=1;j<=n;j++)
//         {
//             //a[i][j]  a[j][n-i+1]   a[n-i+1][n-j+1]  a[n-j+1][i]   
//             vector<int>add;
//             add.push_back(a[i][j]);
//              add.push_back(a[j][n-i+1]);
//               add.push_back(a[n-i+1][n-j+1]);
//                add.push_back(a[n-j+1][i]);
//                sort(add.begin(),add.end());
//                for(auto it:add)ans+=abs(it-add[1]);
//                a[i][j]=add[1];
//             a[j][n-i+1]=add[1];
//                a[n-i+1][n-j+1]=add[1];
//                  a[n-j+1][i]=add[1]; 
//         }
//         cout<<ans<<endl;
// }
// const int mod=1e9+7;
// string s;
// int idx;
// int f[100010][11][2][2];
// int dfs(int now,int shang,int stop,int ling)
// {
//     if(now==0)return ling==0;
//     if(f[now][shang][stop][ling]!=-1)return f[now][shang][stop][ling];
//     f[now][shang][stop][ling]=0;
//     int maxx;
//     if(stop)maxx=s[now]-'0';
//     else maxx=9;
//     for(int i=0;i<=maxx;i++)
//     {
//         if(shang!=i||(ling&&i==0))
//         f[now][shang][stop][ling]=(f[now][shang][stop][ling]+dfs(now-1,i,stop&&(i==s[now]-'0'),ling&&(i==0)))%mod;
//     }
//     return f[now][shang][stop][ling];
// }
// int dp(string s)
// {
//     return dfs(idx,10,1,1);
// }
// signed main()
// {
//     memset(f,-1,sizeof f);
//     cin>>s;
//     reverse(s.begin(),s.end());
//     idx=s.size();
//     s=" "+s;
//     cout<<dp(s)<<endl;
// }
const int mod=1e9+7;
int pows(int a,int b)
{
    int ans=1;
    while(b)
    {
        if(b&1)ans=ans*a%mod;
        a=a*a%mod;
        b>>=1;
    }
    return ans%mod;
}
signed main()
{
    int n,m;
    cin>>n>>m;
    cout<<(n-1)*(m-1)%mod*2*pows(2,n*m-4)%mod;
}