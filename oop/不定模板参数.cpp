// 模板模板参数
#include<bits/stdc++.h>
using namespace std;
void print(){}
template<typename T,typename... U>
void print(const T&a,const U&... b)
{
	cout<<a<<' ';
	print(b...);
}


int main()
{
	print(123,"safa",456);
} 