#include <iostream>
#include <string.h>
using namespace std;

class Student{
    int age;
    char *name;
    public:
    Student(int age, char *name){
        this->age= age;
        //This is shallow copy whrwe we just copy the adddress of the given obj so he change in any of the object will be reflected in any other
       // this->name= name;
         
         //DEEP COPY
         //Herre the things would be a bit different..instead of passing the same array to the obj we will be pasing the copy of the char aray

         this->name= new char[(strlen(name))+1];
         strcpy(this->name,name);
            }
    void display(){
        cout<<"Age: \t"<<this->age<<"\n"<<"Name:\t"<<this->name<<endl;
    }

};