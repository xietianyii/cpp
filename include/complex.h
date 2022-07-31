#ifndef __COMPLEX__
#define __COMPLEX__
#include<iostream>
using namespace std;
class complex
{
private:
    double _real;
    double _imag;
    friend complex& __doapl(complex* a,const complex& b);
public:
    complex conj(const complex& a);
    complex(double r=0,double i=0):_real(r),_imag(i){}
    double real()const{return _real;}
    double imag()const{return _imag;}
    complex operator-(){return complex(-_real,-_imag);}
    complex& operator+=(const complex& _add)
    {
        return __doapl(this,_add);
    }
    complex& operator+=(const double& _add)
    {
        return __doapl(this,complex(_add,0));
    }
    complex& operator-=(complex& _add)
    {
        return __doapl(this,-_add);
    }
    complex& operator-=( double& _add)
    {
        return __doapl(this,complex(-_add,0));
    }
};
complex& __doapl(complex* a,const complex& _add)
{
    a->_real+=_add._real;
        a->_imag+=_add._imag;
    return *a;
}
double real(const complex& a){return a.real();}
double imag(const complex& a){return a.imag();}

complex conj(const complex& a){
        return complex(real(a),-imag(a));
}
ostream& operator<<(ostream& os,const complex& a)
{
    return os<<a.real()<<' '<<a.imag();
}
complex operator+(const complex& a,const complex& b)
{
    return complex(real(a)+real(b),imag(a)+imag(b));
}
complex operator+(const complex& a,const double& b)
{
    return complex(real(a)+b,imag(a));
}
complex operator+(const double& a,const complex& b)
{
    return complex(a+real(b),imag(b));
}
bool operator==(const complex& a,const complex& b)
{
    return real(a)==real(b)&&imag(a)==imag(b);
}
bool operator!=(const complex& a,const complex& b)
{
    return real(a)!=real(b)||imag(a)!=imag(b);
}
#endif