// 模板特化
#include<bits/stdc++.h>
using namespace std;
template<typename T>
class a
{
public:
	void pr(){
		cout<<"template T"<<endl;
	}
};
template<>
class a<int>{
public:
	void pr(){
		cout<<"template int"<<endl;
	}
};
int main()
{
	a<long>x;
	x.pr();
}