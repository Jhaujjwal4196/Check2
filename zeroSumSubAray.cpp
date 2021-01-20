#include <bits/stdc++.h>
using namespace std;

bool subArray(int arr[],int n){
    unordered_set<int> us;
    int sum=0;
    //us.insert(sum);
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==0||us.find(sum)!=us.end())
        return true;
        us.insert(sum);
    }
    return false;
}
main(){
    int arr[]={3,-3,12};
    int n= sizeof(arr)/sizeof(arr[0]);
    if(subArray(arr,n))
    cout<<"Yeah is possible"<<endl;
    else
    {
        cout<<"Sorry,Could not identify for the given set"<<endl;
    }
    
}