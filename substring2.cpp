#include <iostream>
using namespace std;
void print_substr(string input, string output){
    if(input.length()==0){
    cout<<output<<endl;
    return;}

    print_substr(input.substr(1),output);
    print_substr(input.substr(1),output+input[0]);
}
main(){
    string input;
    cout<<"Please provide the string: \t";
    cin>>input;
   string output ="";
   print_substr(input,output);
   
}