#include<iostream>
#include"String.h"
int main()
{
    String s1;
    String s2("hello");
    String s3(s1);
    std::cout<<s3<<endl;
    s3=s2;
    std::cout<<s3<<endl;
    std::cout<<s3[1]<<s3<<endl;
}