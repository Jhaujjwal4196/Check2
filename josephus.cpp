#include <bits/stdc++.h>
using namespace std;
int getSolved(int n, int k){
    //create a doubly list and insert from 0 to n-1
    list<int> l;
    for(int i=0;i<n;i++){
        l.push_back(i);
    }
    //point iterator at the startying of the list
    auto it= l.begin();
    while(l.size()>1){
        for(int i=1;i<k;i++){
            it++;
            //point the iterator to the kth place and checlk if it is last point if it is the last one then make iterator point to the begininhg of it so that it can work like circular list;
            if(it==l.end())
              it=l.begin();
        }
        //erase the kth point and check for the last one
      it=  l.erase(it);
          if(it==l.end())
              it=l.begin();
    }
    //return the begining element
    return *l.begin();
}
main(){
    int n,k;
    cin>>n>>k;
   int j= getSolved(n,k);
   cout<<"The person left finally to be dead is:\t"<<j<<endl;
}