#include <iostream>
using namespace std;
 class Faction{
    // private:
int numerator;
int denominator;
 public:
 Faction(int numerator , int denminator){
     this->denominator= denminator;
     this->numerator= numerator;
 }
 void print(){
     cout<<numerator<<"/"<<denominator<<endl;
 }
 void simplify(){
    int j=min(numerator,denominator);
    int gcd=1;
    for(int i=1;i<=j;i++){
        if(numerator%i==0&&denominator%i==0)
        gcd=i;
    }
    numerator= numerator/gcd;
    denominator=denominator/gcd;
 }

 void add(Faction f2){
     numerator= numerator*f2.denominator+f2.numerator*denominator;
     denominator= denominator*f2.denominator;

     simplify();
 }
 };