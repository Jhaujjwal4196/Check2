#include <iostream>
#include <string.h>
using namespace std;
const char keypad[10][5]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void printWords(int number[],int curr_digit, char output[], int n){
    if(curr_digit==n){
        cout<<output<<"  ";
        return;
    }
    for(int i=0;i<strlen(keypad[number[curr_digit]]);i++){
     output[curr_digit] = keypad[number[curr_digit]][i];
     printWords(number,curr_digit+1,output,n);
     if(number[curr_digit]==0||number[curr_digit]==1)
        return;
    }
}
main(){
    int n,i;
    cout<<"How mny numbers you wanna add:\t";
    cin>>n;
    int input[n];
    for(i=0;i<n;i++)
    cin>>input[i];
    char output[n+1];
    output[n]='\0';
    printWords(input,0,output,n);
}