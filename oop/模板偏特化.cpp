// 模板偏特化
// 个数偏特化
// 范围偏特化
#include<bits/stdc++.h>
using namespace std;

template<typename T1,typename T2>
class a{
public:
	void pr(){
		cout<<"T1 T2"<<endl;
	}
};
template<typename T1>
class a<T1,int>{
	public:
		void pr(){
		cout<<"T2"<<endl;
	}
};
template<typename T>
class b{
public:
	void pr(){
		cout<<"T"<<endl;
	}
};
template<typename U>
class b<U*>{
public:
	void pr(){
		cout<<"U*"<<endl;
	}
};
int main()
{
	a<double,int>x;
	x.pr();
	b<int*>y;
	y.pr();
}