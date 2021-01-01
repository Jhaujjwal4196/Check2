#include <iostream>
using namespace std;
#include "Fraction.cpp"

main(){
    Faction f1(10,20);
    Faction f2(10,20);

    f1.add(f2);
     
     f1.print();
     f2.print();
     
     f1.multiply(f2);
      f1.print();
     f2.print();

     Faction f3= f1+f2;
     f3.print();
}

