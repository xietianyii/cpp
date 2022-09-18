/*arguments can de added without overflow*/
int tmult_ok(int x,int y){
    return x==0||x*y/x==y;
} 
int tmult_ok(int x,int y){
    int64_t mul=x*y;
    return x*y==mul;
} 
 