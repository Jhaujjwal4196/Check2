#include <iostream>
using namespace std;
#include "Complex.cpp"

main(){
    int real,imaginary,real2,imaginary2;
    cin>>real>>imaginary>>real2>>imaginary2;

    int m;
    cin>>m;
    Complex c1(real,imaginary);
    Complex c2(real2,imaginary2);
    switch (m){
        case 1:
        c1.add(c2);
        c1.print();
        c2.print();
        break;
        case 2:
        c1.multiply(c2);
        c1.print();
        c2.print();
        default:
        cout<<"Wrong input provided"<<endl;
    }

}