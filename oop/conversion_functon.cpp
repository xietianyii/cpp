/*
转换函数 将对象专自动转化为type类型
operator type()const {

}
*/
#include<bits/stdc++.h>
using namespace std;
class fraction{
private:
    int numerator;
    int denominator;
public:
    fraction(int num,int den=1):numerator(num),denominator(den){}
    operator double(){
        return numerator*1.0/denominator;
    }
};
int main()
{
    fraction a(2,3);
    cout<<a<<endl;
    double f=a+4;
    cout<<f<<endl;
}