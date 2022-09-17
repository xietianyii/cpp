// #define POS_INFINITY 1e400
// #define NEG_INFINITY (-POS_INFINITY)
// #define NEG_ZERO (1.0/POS_INFINITY)
// #define _GNU_SOURCE 1
// #include<math.h>
// INFINITY 在math.h里宏定义，调用__builtin_inff()内置函数，
#include <bits/stdc++.h>
using namespace std;
void show_type(unsigned char* a,size_t len)
{
    for(int i=len-1;i>=0;i--)
    printf("%.2x ",a[i]);
    cout<<endl;
}

int main()
{
    // int x=7;
    // show_type((unsigned char*)&x,sizeof(x));
    // double a=x;
    // show_type((unsigned char*)&a,sizeof(a));
    double x=-1e308;
    cout<<((x*x>=0))<<endl;
}
// int main()
// {
//     // infinite value (<b>inf</b>)
//     double double_inf = __builtin_inf();
//     int int_max=__builtin_infd32();
//     cout<<int_max<<endl;
//     cout << double_inf << endl;
//     return 0;
// }
