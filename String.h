#ifndef __STRING__
#define __STRING__
#include<iostream>
#include<string.h>
using namespace std;
class String{
    public:
    String(const char*);
    String(const String& _s);
    ~String();
    char* get() const;
    char operator [](const int i) const;
    String& operator = (const String& _s);
private:
    char* s;
};
String::String(const char* _s = 0){
    if(_s){
        int si=strlen(_s);
        s=new char[si + 1];
        strcpy(s,_s);
    }
    else{
        s=new char[1];
        s[0]='\0';
     }
}
String::String(const String& _s){
    int si=strlen(_s.s);
    delete[] s;
    s=new char[si+1];
    strcpy(s,_s.s);
}
char* String::get()const{
        return s;
}
String::~String(){
    delete[] s;
}
String& String::operator=(const String& _s){
        if(&_s==this)return *this;
        int si=strlen(_s.s);
        delete[] s;
        s=new char[si + 1];
        strcpy(s,_s.s);
        return *this;
}
char String::operator[](const int i)const{
        return s[i];
}
ostream& operator<<(ostream& os,const String& _s){
    return os<<_s.get();
}
#endif