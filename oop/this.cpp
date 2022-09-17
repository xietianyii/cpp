#include<bits/stdc++.h>
using namespace std;
class a
{
public:
virtual	void pr(){
	cout<<this<<endl;
cout<<1<<endl;
	}
};
class b:public a{
public:
	void pr(){
		cout<<this<<endl;
cout<<2<<endl;
	}
};
signed main()
{
	b* y=new b;
    a* x=y;

    *(p->vptr)[n](p)// p this指针
    x->pr();
}