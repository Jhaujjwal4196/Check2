#include <iostream>
using namespace std;
long long int fact(int n){
    if(n==0||n==1)
    return 1;
    else
    {
        return (n*fact(n-1));
    }
    
}
main(){
    cout<<"Please provide us the numbe you're looking for:"<<endl;
    int n;
    cin>>n;
    cout<<"The FActoial of the given number is\t"<<fact(n)<<endl;

}