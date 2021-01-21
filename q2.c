#include <stdio.h>
main(){
    int x,y,z;
    printf("Please provide x , y and z repsectively:\n");
    scanf("%d %d %d",&x,&y,&z);
    int temp;
    temp= y;
    y=z;
    z=x;
    x=temp;
    printf("Please find the values of x y and z after rotation:\n%d %d %d",x,y,z);

}