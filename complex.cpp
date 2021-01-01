#include <iostream>
using namespace std;
 class Complex{
     int real;
     int imaginary;

     public:
     Complex(int real, int imaginary){
         this->real=real;
         this->imaginary=imaginary;
     }
     void print(){
         if(imaginary>0)
         cout<<real<<"+"<<imaginary<<"i"<<endl;
         else
         cout<<real<<imaginary<<"i"<<endl;
     }
     void add(Complex const &c2){
         real= real+c2.real;
         imaginary= imaginary+c2.imaginary;

     }
     void multiply(Complex const &c2){
         real = real*c2.real;
         imaginary= imaginary*c2.imaginary;
     }
 };