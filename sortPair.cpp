// 
#include <bits/stdc++.h> 
using namespace std;
void sortchar(int a[],char b[], int n){
    pair <int, char>p1[n];
    
    for(int i=0;i<n;i++)
    p1[i]={a[i],b[i]};
sort(p1,p1+n);
    for(int i=0;i<n;i++)
    cout<<p1[i].second<<"\t";

}
main(){
int a[3]={9,1,3};
char b[3]{'u','j','w'};
 sortchar(a,b,3);
}