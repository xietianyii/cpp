// 模板模板参数
#include<bits/stdc++.h>
using namespace std;
template<typename T,
		template<typename T>class smartpoint
>
class a
{
private:
	smartpoint<T>sp;
public:
	a():sp(new T){

	}

};

int main()
{
	a<int,shared_ptr>x;
} 