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

 void add(Faction const  &f2){
     numerator= numerator*f2.denominator+f2.numerator*denominator;
     denominator= denominator*f2.denominator;

     simplify();
 }
 Faction operator+(Faction const  &f2){
    int  num= numerator*f2.denominator+f2.numerator*denominator;
    int  deno= denominator*f2.denominator;
Faction f3(num,deno);
     f3.simplify();
     return f3;
 }
 Faction operator/(Faction const  &f2){
    int  num= numerator*f2.denominator;//+f2.numerator*denominator;
    int  deno= denominator*f2.numerator;
Faction f3(num,deno);
     f3.simplify();
     return f3;
 }
 Faction &operator+=(Faction const  &f2){
    numerator= numerator*f2.denominator+f2.numerator*denominator;
    denominator= denominator*f2.denominator;

     simplify();
     return *this;
 }
 
 Faction &operator++(){
     numerator= numerator+denominator;
     simplify();
     return *this;
 }
 Faction operator++(int){
     Faction fNew(numerator,denominator);
     numerator=numerator+denominator;
     simplify();
     return fNew;
 }
 void multiply(Faction const &f2){
     numerator= numerator*f2.numerator;
     denominator= denominator*f2.denominator;
     simplify();
 }
 };