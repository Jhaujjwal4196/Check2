#include <utility>;
#include<iostream>
using namespace std;
main(){
    pair <int ,int> p1(10,20);
   // pair p3;
  //  p3={3,40};
  pair<int ,int>p3;
 // p3=make_pair(10,100);
p3={30,10};
    pair<int ,string>p2(10,"UjjwalJha");
cout<<p1.first<<"\t"<<p1.second<<endl;
cout<<p2.first<<"\t"<<p2.second<<endl;
cout<<(p1==p3)<<endl;
cout<<(p1!=p3)<<endl;
cout<<(p1>p3)<<endl;
cout<<(p1<p3)<<endl;
}