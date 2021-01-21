#include <stdio.h>
main(){
    int x,y;
    printf("Please provide the two nos you wanna compare:\n");
    scanf("%d %d",&x,&y);
    x>y?printf("%d is greatest",x):printf("%d is greatest",y);
}