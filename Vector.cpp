#include <bits/stdc++.h>
using namespace std;
main(){
    vector <int> v1{10,20,30,40,50};
    v1.pop_back();
    cout<<v1.front()<<"\t"<<v1.back()<<endl;
     v1.insert(v1.begin(),100);
     v1.insert(v1.begin()+2,200);
     v1.insert(v1.begin(),2,300);
     for(int x:v1)
     cout<<x<<"\t";
     cout<<endl;
     vector<int> v2;
     v2.insert(v2.begin(),v1.begin(),v1.begin()+3);
     for(int x:v2)
     cout<<x<<"\t";
     cout<<endl;
     v2.resize(2);
     for(int x:v2)
     cout<<x<<"\t";
     cout<<endl;
     v2.resize(5,100);
     for(int x:v2)
     cout<<x<<"\t";
     cout<<endl; 
     v2.erase(v2.begin());
     for(int x:v2)
     cout<<x<<"\t";
     cout<<endl;
     v2.clear();
     if(v2.empty()==true)
     cout<<"Empty Vector"<<endl;
     else
     cout<<"Not Empty Vector"<<endl;


}