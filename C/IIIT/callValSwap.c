#include <stdio.h>
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}
void main(){
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap(x, y);
    printf("After swapping: x = %d, y = %d\n", x, y);
}

