#include <bits/stdc++.h>
using namespace std;
void getMaxSubArray(int a[],int n,int k){
    //deque<int> q1;
    int arr[n-k+1];
    for(int i=0;i<n;i++){
        int max= a[i];
       for(int j=i;j<i+k;j++)
       if(a[j]>max)
       max=a[j];
       arr[i]=max;
    }
    for(int x: arr)
    cout<<x<<"\t";
    cout<<endl;
}
main(){
    int arr[]={10,8,5,12,15,7,6};
    getMaxSubArray(arr,7,5);
    
}