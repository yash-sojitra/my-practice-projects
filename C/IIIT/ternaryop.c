#include <stdio.h>
int main(){
    int x;
    printf("enter a number to know if it is even or not : \n");
    scanf("%d",&x);
    x%2==0?printf("even"):printf("odd");
    return 0;
}