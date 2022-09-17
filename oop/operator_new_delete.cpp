#include<bits/stdc++.h>
using namespace std;
//operator new delete 
void* operator new(size_t size){
	cout<<"global new()"<<endl;
	return malloc(size);
}
void operator delete(void* ptr){
	cout<<"global delete()"<<endl;
	free(ptr);
}
void* operator new[](size_t size){
	cout<<"global new[]()"<<endl;
	return malloc(size);
}
void operator delete[](void* ptr){
	cout<<"global delete[]()"<<endl;
	free(ptr);
}
class node{
public:
	int a;
	void* operator new(size_t size){
	cout<<"node global new()"<<endl;
	return malloc(size);
}
void operator delete(void* ptr){
	cout<<"node global delete()"<<endl;
	free(ptr);
}
void* operator new[](size_t size){
	cout<<"new"<<size<<endl;
	cout<<"node global new[]()"<<endl;
	return malloc(size);
}
void operator delete[](void* ptr,size_t size){//optional 可选项
	cout<<"de"<<size<<endl;
	cout<<"node global delete[]()"<<endl;
	free(ptr);
}
};

signed main()
{
	cout<<sizeof(node)<<endl;
	node* a=new node[5];//new array实际分配会多个count
	delete []a;
}