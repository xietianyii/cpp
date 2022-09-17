/*arguments can de added without overflow*/
int tadd_ok(int x,int y){
    return !((x>>31)==(y>>31)&&((x+y)>>31)!=(x>>31));
} 
int tsub(int x,int y){
    return tadd_ok(x,-y);
}
//WARNING:this code is buggy
// y -> -y 溢出 -2^(w-1)-> -2^(w-1)
//0- -2^(w-1) return 1 , 0 is right
 