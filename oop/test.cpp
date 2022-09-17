#include<bits/stdc++.h>
#include"include/bit.h"
using namespace std;
int main()
{
    bit<int>a(200010);
    a.add(10,2);
    a.add(11,10);
    cout<<a.sum(11)<<endl;
}