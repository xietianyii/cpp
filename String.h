#ifndef __STRING__
#define __STRING__
#include<iostream>
#include<string.h>
using namespace std;
class String
{
    public:
    String(const char* _s="\0"){
        int si=strlen(_s);
        s=new char[si];
         for(int i=0;i<si;i++)
        s[i]=_s[i];
    }
    String(const String& _s){
        int si=strlen(_s.s);
        delete s;
        s=new char[si];
        for(int i=0;i<si;i++)
        s[i]=_s.s[i];
    }
    ~String(){delete s;}
    char* get()const{
        return s;
    }
    char operator[](const int i)const{
        return s[i];
    }
    String& operator=(const String& _s)
    {
        int si=strlen(_s.s);
        delete s;
        s=new char[si];
        for(int i=0;i<si;i++)
        s[i]=_s.s[i];
        return *this;
    }
    private:
    char* s;
};
ostream& operator<<(ostream& os,const String& _s)
{
    return os<<_s.get()<<endl;
}
#endif