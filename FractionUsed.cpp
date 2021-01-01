#include <iostream>
using namespace std;
#include "Fraction.cpp"

main(){
    Faction f1(10,20);
    Faction f2(10,20);

    f1.add(f2);
     
     f1.print();
     f2.print();

}

