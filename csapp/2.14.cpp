#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=0x66,y=0x39;
    printf("%X %X %X %X\n",x&y,x|y,~x|~y,x&!y);
    printf("%d %d %d %d\n",x&&y,x||y,!x||!y,x&&~y);
}