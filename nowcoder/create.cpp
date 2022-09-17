#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define endl '\n'
ll bigrand(ll x){
    ll res=0;
    for(int i=0;i<61;i++){
        res+=rand()%2*(1LL<<i);
    }
    return res%x+1;
}
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

void create2(int i)
{
    char in[150];
    string s="red";
    sprintf(in,"./%d.in",i);
    freopen(in,"w",stdout);
    int t=10;
    cout<<t<<endl;
    while(t--)
    {
        int n=1e4;
        int k=bigrand(n);
        cout<<n<<' '<<k<<endl;
        for(int i=1;i<=n;i++)
        cout<<bigrand(1e9)<<' ';
        cout<<endl;
    }
    fclose(stdin);fclose(stdout);
}

void create1(int i,int x)
{
    char in[150];
    string s="red";
    sprintf(in,"./%d.in",i);
    freopen(in,"w",stdout);
    int n=x-bigrand(100000),m=x-bigrand(100000);
    cout<<n<<' '<<m<<endl;
    fclose(stdin);fclose(stdout);
}

signed main(){
    srand(time(0));
    for(int i=1;i<=4;i++)create1(i,1e5);
    for(int i=5;i<=20;i++)create1(i,1e9);
}