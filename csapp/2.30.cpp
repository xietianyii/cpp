/*arguments can de added without overflow*/
int uadd_ok(int x,int y){
    return !((x>>31)==(y>>31)&&((x+y)>>31)!=(x>>31));
} 