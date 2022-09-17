#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num=0x87654321;
    printf("num的最低有效字节: %X\n",(num&0xFF));
    printf("num的最低有效字节不变,其他位取反: %X\n",~(num^0xFF));//对全1异或即取反，对全0异或不变
    printf("num的最低有效字节设为1,其他位不变: %X\n",(num|0xFF));
} 