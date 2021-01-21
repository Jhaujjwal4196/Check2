#include <stdio.h>
main(){
    int len,wid;
    printf("Please provide the length and width repsectively:\n");
    scanf("%d %d",&len,&wid);
    printf("The area of rectange is %d \nperimeter of rectangle is %d",len*wid, 2*(len+wid));
}