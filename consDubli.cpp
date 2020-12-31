#include <iostream>
using namespace std;
void remove(char str[]){
    if(str[0]=='\0')
    return;
    if(str[0]==str[1]){
    
    int i=1;
    for(;str[i]!='\0';i++)
    {
    str[i]=str[i+1];
    }
    str[i]=str[i+1];
    remove(str);}
    remove(str+1);

}
main(){
    char str[100];
    cin>>str;
    remove(str);
    cout<<str<<endl;
}