#include <iostream>
using namespace std;

void removeX(char str[]){
    if(str[0]=='\0') return;
    if(str[0]!='x') removeX(str+1);
    else{
        int i=1;
        for(;str[i]!='\0';i++)
            str[i-1]=str[i];
            str[i-1]=str[i];
removeX(str);
    }

}
int length(char str[]){
    if(str[0]=='\0') return 0;
    int SmallLength= length(str+1);
    return 1+SmallLength;
}
main(){
char str[100];
cin>>str;    
cout<<length(str)<<endl;
removeX(str);
    int i=0;
    for(;str[i]!='\0';i++)
    cout<<str[i];
    cout<<"\n"<<length(str)<<endl;
}