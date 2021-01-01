#include <iostream>
using namespace std;
#include "Deep_and_shallow.cpp"

main(){
    char name[]="abcd";
    Student s1(20,name);
    s1.display();

    name[3]='s';
    Student s2(21,name);
    s2.display();

    s1.display();
}