#include<bits/stdc++.h>
using namespace std;
class obs
{
public:
	virtual void update(void* a)
	{
		cout<<"!"<<this<<' '<<a<<endl;
	}
};
class sub
{
	int val;
	vector<obs*>view;
public:
	void app(obs* o)
	{
		cout<<"!!!"<<o<<endl;
		view.push_back(o);
	}
	void set(int x)
	{
		val=x;
		notify();
	}
	void notify()
	{
		for(auto &it:view)
		{
			cout<<"!!!! "<<it<<endl;
			it->update(this);
		}
	}
};

signed main()
{
	sub a;
	a.app(new obs);
	a.set(2);
	cout<<"!!"<<&a<<endl;
	vector<int>s;
	s.clear();
}  
// this 哪个对象调用的成员函数 this就是这个对象本身