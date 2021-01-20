#include <bits/stdc++.h>
using namespace std;

bool compare(pair <int,int> p1, pair <int,int> p2){
    if(p1.second==p2.second)
    return p1.first>p2.first;
     return p1.second>p2.first;
}
void printMostFrequent(int arr[],int n, int k){
    unordered_map <int, int> um;
    for(int i=0;i<n;i++)
    um[arr[i]]++;

    vector<pair<int, int>> freqVector(um.begin(),um.end());
    sort(freqVector.begin(),freqVector.end(),compare);
     
     cout<<k<<" the most occured values"<<endl;
     for(int i=0;i<k;i++)
     cout<<freqVector[i].first<<endl;


}
main(){
    int arr[]={1,2,3,4,5,1,1,2,2,2,2,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    int k=2;
    printMostFrequent(arr,n,k);

}