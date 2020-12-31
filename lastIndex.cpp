#include <iostream>
using namespace std;
int lastIndex(int a[],int size, int value){
   // cout<<a[size];
    if(a[size]==value)
    return size;
    if(size==0&&a[size]!=value)
    return 0;
    else
    return lastIndex(a,size-1,value); 
}

main(){
int a[5]={5,0,8,9,1};
int b=5;
int size=lastIndex(a,5,5);
if(size>=0)
cout<<"Starting from he end Found at position \t"<<size<<endl; 
else
cout<<"Not found"<<endl;
}