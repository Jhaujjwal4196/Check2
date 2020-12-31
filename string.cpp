#include <iostream>
using namespace std;
main(){
    string s= "Jha";
    string *s1= new string;
    *s1= "ujjwal";
   string s2= s+*s1;
   cout<<*s1<<"\t"<<s<<"\t"<<s2<<endl;
   cout<<s2.size()<<endl;
   cout<<s2.length()<<endl;
   cout<<s2.find("uj")<<endl;
   cout<<s2.substr(3)<<endl;
   cout<<s2.substr(3,5)<<endl;

}