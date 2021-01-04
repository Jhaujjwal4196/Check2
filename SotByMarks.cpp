#include <bits/stdc++.h>
#include <vector>
using namespace std;
void SortByMarks(int a[],int b[],int n){
pair <int, int>p1[n];
    
    for(int i=0;i<n;i++)
    p1[i]={b[i],a[i]};
sort(p1,p1+n);
    for(int i=n-1;i>=0;i--)
    cout<<p1[i].second<<"\t"<<p1[i].first<<"\n";

}
void SortByMarks(int a[],int b[], int n){
    vector <pair<int,int>> v;
    for(int i=0;i<n;i++)
    v.push_back(b[i],a[i]);
    sort(v.begin(),v.end(),greater<pair<int,int>>());
    for(auto it=v.begin();it!=v.end();it++)
   cout<<(*it).second<<"\t"<<"(*it).second"<<endl;

}
main(){
    int ar[]={105,106,109,108,102};
    int arr[]={70,69,36,89,11};
    SortByMarks(ar,arr,5);
    SortByMarks(ar,arr,5);
}