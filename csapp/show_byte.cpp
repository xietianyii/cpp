#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
void show_byte(unsigned char * num,size_t len)
{
    for(int i=0;i<len;i++)
    printf("%.2x ",num[i]);
    cout<<endl;
}
int main()
{
    /*
    short x=12345;
    short mx=-x;
    show_byte((unsigned char*)&x,sizeof(x));
    show_byte((unsigned char*)&mx,sizeof(mx));

    cout<<(-2147483647-1U)<<endl;
    // 1000000000
     //0000000001
     //111111111110
     //000000000001
     int a=-2;
     unsigned int b=1;
     cout<<(a+b)<<endl;
     cout<<(0x80000000 < 0)<<endl;
     */
    
     union node{
        int x;
        char a[4];
     }num;
     num.x=3;
     for(int i=0;i<4;i++)
     {
        for(int j=0;j<8;j++)
     printf("%d",num.a[i]>>j&1);
     }
     cout<<endl;
     
    //int a[20]={1,0,2,3}; ·
    //show_byte((unsigned char*)a,sizeof(a));
   /*
    int a[4];
    memset(a,-1,sizeof a);
    cout<<a[0]<<endl;
    */
   
}