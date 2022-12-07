#include <stdio.h>

int main(int argc, char **argv)
{
    int N, a = -1 , b = 0 , c = 0;

    printf("Entera number: ");
    scanf("%d", &N);

    for (size_t i = 0; i < N; i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ", c);
    }
    
}