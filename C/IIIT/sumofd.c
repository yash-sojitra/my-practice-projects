#include <stdio.h>
void main(){
    int x,sum;
    scanf("%d", &x);
    while(x){
        int digit = x%10;
        sum = sum + digit;
        x/=10;
    }
    printf("%d",sum);
}