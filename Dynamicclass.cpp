#include<iostream>
using namespace std;
class Dynamic{
    int *data;
    int nextIndex;
    int capacity;
    public:
    Dynamic(){
        data = new int[5];
        nextIndex=0;
        capacity=5;
    }
    void add(int element){
        if(nextIndex==capacity){
           int *newData= new int[capacity*2];
           for(int i=0;i<capacity;i++){
               newData[i]=data[i];
           }
           delete []data;
           data= newData;
           capacity*=2;
        }
        
            data[nextIndex++]=element;
        
    }
    void print(){
        for(int i=0;i<capacity;i++){
          cout<<data[i]<<"\t";
        }
    }
    int get(int i){
        if(i<nextIndex)
        return data[i];
        else
        {
            return -1;
        }
        
    }
    void add(int i, int element){
        if(i<nextIndex)
        data[i]=element;
        else if(i==nextIndex)
        add(element);
        else
        {
            return;
        }
        
    }
};

main(){
    Dynamic d;
    d.add(10);
    d.add(11);
    d.add(12);
    d.add(13);
    d.add(14);
    d.add(15);
    d.add(6,15);
    d.add(11,15);
    d.print();


    int j= d.get(16);
    int k= d.get(5);
    cout<<"\n"<<j<<"\t"<<k<<"\t"<<endl;
    }
