#ifndef __BIT__
#define __BIT__
#include<vector>
template<typename T>
class bit
{
public:
    bit(const int len):Size(len),Tree(std::vector<T>(len+1)){}
    static int lowbit(int x){return x&-x;}
    void add(int x,const T num)
    {
        while(x<=Size)
        {
            Tree[x]+=num;
            x+=lowbit(x);
        }
    }
    T sum(int x)const
    {
        T ans=0;
        while(x)
        {
            ans+=Tree[x];
            x-=lowbit(x);
        }
        return ans;
    }
private:
    int Size;
    std::vector<T>Tree;
};
#endif