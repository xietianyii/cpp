#include<bits/stdc++.h>
using namespace std;
class a{
public:
	a(){

	}
	int operator ()(int a,int b)const{
		return a>b?a:b;
	}
private:
};

int main()
{
   a x;
   cout<<x(1,2);
}