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
void PrintMax(int a[],int n,int k){
    deque <int> dq;
    for(int i=0;i<k;i++){
    while(!dq.empty()&&a[i]>=a[dq.back()])
    dq.pop_back();
    dq.push_back(i);}
   for(int i=k;i<n;i++){
       cout<<a[dq.front()]<<"\t";
       while(!dq.empty()&&dq.front()<=(i-k))
       dq.pop_front();
       dq.push_back(i);
   }
    cout<<a[dq.front()]<<"\t";
}
main(){
    int arr[]={10,8,5,12,15,7,6};
    getMaxSubArray(arr,7,5);
    cout<<"From Optimized code"<<endl;
    PrintMax(arr,7,5);
}