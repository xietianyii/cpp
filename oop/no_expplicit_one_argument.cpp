/*
只有一个实参并且构造函数前无explicit，可能会将实数转化为对象，或者说编译器有这个选择
ator(int num) {

}
*/
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){if(b==0)return a;return gcd(b,a%b);}
class fraction{
private:
    int numerator;
    int denominator;
public:
   explicit fraction(int num,int den=1):numerator(num),denominator(den){}
    operator double()const{
        return numerator*1.0/denominator;
    }
    fraction operator+(const fraction& x){
        int num=numerator*x.denominator+denominator*x.numerator;
        int den=x.denominator*denominator;
        int gcd_num=gcd(num,den);
        num/=gcd_num;
        den/=gcd_num;
        return fraction(num,den);
    } 
};
int main()
{
    fraction a(2,3);
    //fraction c=a+2; 此时 2无法转成fraction，无法相加，同时 a转为double a+2为double，也无法转为fraction对c拷贝构造
    //cout<<c<<endl;
}