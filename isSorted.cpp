#include <iostream>
using namespace std;
bool isSorted(int a[], int n){
    if(n==0||n==1)
    return true;
    if(a[0]>a[1])
    return false;
    bool isSmallerSorted= isSorted(a+1, n-1);
    if(isSmallerSorted)
    return true;
    
}
main(){
    cout<<"Please Provide us the length of array:\t";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Please provide us the elements :\t";
    for(int i=0;i<n;i++)
    cin>>arr[i];
   if(isSorted(arr,n))
cout<<"Yes the provided input aarray is sorted:"<<endl;
else
{
    cout<<"Sorry ..the provided array is unsorted:"<<endl;
}


}