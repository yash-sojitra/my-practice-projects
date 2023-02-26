#include <stdio.h>
void main(){
    int a = 5, b =6;
    int *p1 = &a, *p2 = &b;
    printf("address of a is = %d\n", p1);
    printf("address of b is = %d\n", p2);
    printf("address next to a is = %d\n", p1++);
    printf("address before a is = %d\n", p1--);
    printf("diffrence af addreses a and b is = %d", p2-p1);
}