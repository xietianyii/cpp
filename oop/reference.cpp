// reference 
#include<bits/stdc++.h>
using namespace std;
class a
{
public:
	void fun1(int x)const{//是函数签名
	cout<<x<<endl;
}
void fun1(const int x){//不是函数签名
	cout<<"!"<<x<<endl;
}

};

int main()
{
	a x;
	x.fun1(2);

} 