#include <stdio.h>
int fib_itr(int n){
    int a = 0, b = 1, c;
    if (n == 1)
        return a;
    else if (n == 2)
        return b;
    else{
        for (int i = 3; i <= n; i++){
            c = a + b;
            a = b;
            b = c;
        }
    }
    return c;
}
int fib_rec(int n){
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return fib_rec(n - 1) + fib_rec(n - 2);
}
void main(){
    int n;
    printf("enter a number: \n");
    scanf("%d", &n);
    printf("%dth term of fibonaci itreatively is : \n %d\n", n, fib_itr(n));
    printf("%dth term of fibonaci recursively is : \n %d\n", n, fib_rec(n));
}