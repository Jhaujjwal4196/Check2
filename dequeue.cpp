#include <bits/stdc++.h>
using namespace std;
deque <int> dq;
void insertMax(int n){
    dq.push_back(n);
   // for(auto it= dq.begin();it!=dq.end();it++)
     
//
}
void insertMin(int n){
dq.push_front(n);
}
int getMax(){
    return dq.back();

}
int getMin(){
    return dq.front();
}
void extractMin(){
    dq.pop_front();
}
void extractMax(){
    dq.pop_back();
}

main(){
    insertMax(20);
    insertMin(10);
    insertMax(39);
    insertMax(56);
    for(int x: dq)
    cout<<x<<"\t";
    cout<<endl;
    cout<<getMax<<endl;
    cout<<getMin<<endl;
    extractMax();
    extractMin();
    for(int x: dq)
    cout<<x<<"\t";
    cout<<endl;

}