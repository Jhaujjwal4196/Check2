#include<iostream>
using namespace std;
int substring(string input , string output[]){
if(input.empty()){
    output[0]="";
return 1;}
string smallstring = input.substr(1);
int smalloutput=substring(smallstring,output);
for(int i=0;i<smalloutput;i++)
output[i+smalloutput]=input[0]+output[i];
return 2*smalloutput;
}

main(){
    string *output= new string[1000];
    string input;
    cout<<"please provide the input string for which the suset you're looking for:\t";
    cin>>input;
    int size= substring(input,output);
    cout<<"Pleae find the substring for the given string"<<endl;
    for(int i=0;i<size;i++)
    cout<<output[i]<<endl;
    
}