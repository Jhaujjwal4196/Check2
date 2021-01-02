#include <iostream>
using namespace std;
class Polynomial{
    int *data;
    int capacity;

    public:
    Polynomial(){
        capacity=5;
        data= new int[5];
    }

    //Deep copy constructor
    Polynomial(const Polynomial &f1){
        this->capacity=f1.capacity;
        this->data= new int[f1.capacity];
        for(int i=0;i<f1.capacity;i++)
        this->data[i]= f1.data[i];
    }
    // setting the coeffiecients effectively
    void setCoeffiecient(int deg, int *elem){
        Polynomial p1;
        if(capacity<deg){
           // while(capacity<deg){
              p1.data = new int[2*capacity];
              for(int i=0;i<deg;i++)
              p1.data[i]=elem[i];
             

              delete []data;
              data=p1.data;
              capacity*=2;
        }
        else
        {for(int i=0;i<deg;i++)
            data[i]=elem[i];
        }
        
    }
    void print(){
        for(int i=0;i<capacity;i++){
            if(data[i]>0)
            cout<<data[i]<<"x^"<<i<<"+";
            else
            cout<<data[i]<<"x^"<<i;
        }
        cout<<"\n";
    }
    Polynomial operator+(Polynomial const &f1){
        Polynomial fnew;
       for(int i=0;i<capacity;i++){
          fnew.data[i]= data[i]+f1.data[i];
       }
       return fnew;
    }
     
};
main(){
    Polynomial p1,p2,p3;
    int elements[10]={1,2,3,4};
    p1.setCoeffiecient(4,elements);
    p1.print();
    int ele[10]={0,1,5,6};
    p2.setCoeffiecient(4,ele);
    p3= p1+p2;
    p3.print();
    int ele3[10]={1,2,3,4,5};
    Polynomial p4,p5;
    p4.setCoeffiecient(6,ele3);
    p4.print();
p5=p1+p3;
p5.print();
    
}