#include <stdio.h>
void main(){
    int x,y;
    printf("enter two numbers :\n");
    scanf("%d %d",&x,&y);
    printf("ans = %d\n",x-(~y)-1);
}