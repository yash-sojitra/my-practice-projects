#include <stdio.h>
#include <math.h>
void main(){
    int num,sum = 0;
    printf("enter a three digit number : \n");
    scanf("%d", &num);
    int a = num;
    while(num){
        int digit = num % 10;
        sum += pow(digit,3);
        num /= 10;
    }
    if(sum == a)
        printf("its an armstrong number");
    else
        printf("it isn't an armstrong number");
}