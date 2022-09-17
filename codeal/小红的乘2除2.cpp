#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
string shiToEr(string s) {
	int sum(0);
	vector<char>v;
	int i, j;
	string binary;
	char ch;
 
	//把每一位存到v里面去 
	for (int i(s.length() - 1); i >= 0; --i) {
		v.insert(v.begin(), s[i] - '0');
	}
 
	//计算二进制 
	while (1) {
		j = v.size() - 1;
		ch = v[j] % 2 + '0';
		binary.insert(binary.begin(), 1, ch);
		for (sum = 0, i = 0; i <= j; i++) {
			if (i < j) {				
				v[i + 1] += (v[i] - ((v[i] >> 1) << 1)) * 10;
			}
			
			v[i] >>= 1;
			sum += v[i];
		}
		if (sum == 0) {
			break;
		}
	}
	return binary;
}
void solve()
{
    string s1,s2;
    cin>>s1>>s2;
    string ans1=shiToEr(s1);
    string ans2=shiToEr(s2);
    int ans=0;
    for(int i=0;i<min(ans2.size(),ans1.size());i++)
    {
        if(ans1[i]=='0'&&ans2[i]=='1')
        {
            cout<<-1<<endl;
            return ;
        }
        if(ans1[i]=='1'&&ans2[i]=='0')
        {
            while(ans1.size()>i)
            {
                ans++;
                ans1.pop_back();
            }
            break;
        }
    }
    while(ans1.size()<ans2.size())
    {
        ans1.push_back('0');
        ans++;
    }
    while(ans1.size()>ans2.size())
    {
        ans1.pop_back();
        ans++;
    }
    if(ans1==ans2)
    cout<<ans<<endl;
    else cout<<-1<<endl;
}
signed main() {
    int _;
    cin>>_;
    while(_--)
    {
        solve();
    }
}

