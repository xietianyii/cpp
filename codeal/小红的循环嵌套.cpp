#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string now;
    int res=0,ans=0;
    while(getline(cin,s))
    {
        reverse(s.begin(),s.end());
        while(s.size()&&s[s.size()-1]==' ')s.pop_back();
        reverse(s.begin(),s.end());
        for(auto it:s)
        {
            if(it=='{')
            {
                if(s[0]=='f')now.push_back('{'),res++;
                else now.push_back('(');
            }
            if(it=='}')
            {
                if(now[now.size()-1]=='{')res--,now.pop_back();
                else now.pop_back();
            }
            ans=max(ans,res);
        }
    }
    cout<<ans<<endl;
}