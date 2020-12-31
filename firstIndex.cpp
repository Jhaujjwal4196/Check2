#include <iostream>
#include <cmath>
using namespace std;
int firstIndex(int a[], int size, int val){
    
if(a[0]==val)
//cout<<"Found First at position \t"<<abs(size_Fix-size)<<endl; 
return size;
else if(size==0&&a[size]!=val)
//cout<<"Not found"<<endl;
return 0;
else
{
    return firstIndex(a+1,size-1,val);
}


}
main(){
int a[5]={3,1,8,9,6};
int b=5;
int size=firstIndex(a,5,6);
if(size)
cout<<"Found First at position \t"<<abs(b-size)<<endl; 
else
{
    cout<<"Not found"<<endl;
}

}