#include <stdio.h>

int fib_recursive(int n);

int main(int argc, char const *argv[])
{
    int i;
    int ans;

    printf("write the number of term you want in fibonacci series\n");
    scanf("%d", &i);

    ans = fib_recursive(i);

    printf("the no.%d term in fibonacci series is: %d \n", i,ans);

    return 0;
}

int fib_recursive(int n)
{
    if (n == 1){
        return 0;
    }
    else if (n == 2){
        return 1;
    }
    else{
        return fib_recursive(n-1) + fib_recursive(n-2);
    }

}
