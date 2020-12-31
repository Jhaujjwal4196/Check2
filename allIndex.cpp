#include <iostream>
using namespace std;
int allIndices(int a[],int size, int val,int out[]){
    //int arr[5],i=0;
    int i=0;
    
    if(a[size]==val){
    out[i++]=size;
    return allIndices(a,size-1,val,out);}
    else  if(size==0&&a[size]!=val)
    return -1;
    else
    return allIndices(a,size-1,val,out); 

    
}
main(){
int a[5]={1,1,1,1,1};
int b[5];
int i=0;
allIndices(a,5,1,b);
for( i=0;i<5;i++){
    cout<<b[i]<<endl;
if(b[i]>=0&&b[i]<5)
cout<<"Starting from he end Found at position \t"<<b[i]<<endl; 
// else
// cout<<"Not found"<<endl;
}}