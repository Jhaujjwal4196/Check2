#include <iostream>
using namespace std;
void remove(char s[]){
  if(s[0]=='\0')
return ;
if(s[0]!='x')
return remove(s+1);
int i=1;
for(;s[i]!='\0';i++){
    s[i-1]=s[i];
}
s[i-1]=s[i];
remove(s);

}
int length(char s[]){
if(s[0]=='\0')
return 0;
int smallLength= length(s+1);
return 1+smallLength;
}
main(){
char s[100];
cin>>s;
cout<<length(s)<<endl;
remove(s);
cout<<s<<endl;
cout<<length(s)<<endl;
}