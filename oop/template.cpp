// 类模板
// 函数模板
// 成员模板  使构造函数更灵活，基类可以用派生类初始化
#include<bits/stdc++.h>
using namespace std;
template<typename T>
T minn(const T& a,const T& b)
{
    return a<b?a:b;
}
template<typename T1,typename T2>
class Pair{
public:
    Pair(){}
    Pair(const T1 a,const T2 b):first(a),second(b){}
    template<typename U1,typename U2>
    Pair(const Pair<U1,U2>&a):first(a.first),second(a.second){}//const 一定要加
    T1 first;
    T2 second;
};
int main()
{
	Pair<long long,long long>a(Pair<int,int>(2,3));
	cout<<a.first<<' '<<a.second<<endl;
}