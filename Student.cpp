#include <iostream>
using namespace std;
#include "Deep_and_shallow.cpp"

main(){
    char name[]="abcd";
    Student s1(20,name);
    s1.display();

    //name[3]='s';
    Student s2(s1);
    s2.display();

    s2.name[0]='j';

    s1.display();
    s2.display();
}