#include <iostream>
using namespace std;
int lastIndex(int a[],int size, int value){
    //cout<<a[size];
    if(a[size]==value)
    return size;
    else if(size==0&&a[size]!=value)
    return 0;
    else
    {
        return lastIndex(a-1,size-1,value);
    }
    
}
main(){
int a[5]={3,1,9,9,1};
int b=5;
int size=lastIndex(a,4,9);
if(size)
cout<<"Found First at position \t"<<size<<endl; 
else
{
    cout<<"Not found"<<endl;
}

}