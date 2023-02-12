#include <stdio.h>
void main(){
    int n;
    printf("enter number of terms :\n");
    scanf("%d", &n);
    int a = 0,b = 1,c;
    for (int i = 1; i <= n; i++){
        if (i == 1)
            printf("%d ", a);
        else if (i == 2)
            printf("%d ", b);
        else{
            c = a + b;
            a = b;
            b = c;
        printf("%d ", c);
        }
    }
}