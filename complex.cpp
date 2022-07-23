#include<iostream>
#include"complex.h"
int main()
{
    complex a(1,2),b(3,4);
    a+=b;
    cout<<a<<b<<a+b<<a+2<<10+a<<endl;
}