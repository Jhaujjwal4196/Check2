#include <iostream>
using namespace std;
int Fibonnaci(int n){
    if(n==1||n==0)
    if(n==1)
    return 1;
    else
    {
        return 0;
    }
    
    else
    {//cout<<n<<"\t";
        return (Fibonnaci(n-1)+Fibonnaci(n-2));
            
      //cout<<n<<"\t";
    }

}
main(){
cout<<"Please provide the nth term you are looking for:\t";
int n;
cin>>n;
cout<<"The nth term for the given value in fibonnaci is:\n";    //  <<Fibonnaci(n-1)<<endl;
for(int i=1;i<=n;i++)
cout<<Fibonnaci(i-1)<<"\t";
}