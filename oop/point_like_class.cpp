#include<bits/stdc++.h>
using namespace std;
template<typename T>
class smartpoint{
public:
	smartpoint(T* a):point(a){}
	T operator *()const{
		return *point;
	}
	T operator ->()const{
		return point;
	}
private:
	T* point;
	int count=1;
};

int main()
{
   
}