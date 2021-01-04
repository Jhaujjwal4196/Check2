#include <bits/stdc++.h>
using namespace std;
void SortByMarks(int a[],int b[],int n){
pair <int, int>p1[n];
    
    for(int i=0;i<n;i++)
    p1[i]={b[i],a[i]};
sort(p1,p1+n);
    for(int i=n-1;i>=0;i--)
    cout<<p1[i].second<<"\t"<<p1[i].first<<"\n";

}
main(){
    int ar[]={105,106,109,108,102};
    int arr[]={70,69,36,89,11};
    SortByMarks(ar,arr,5);
}