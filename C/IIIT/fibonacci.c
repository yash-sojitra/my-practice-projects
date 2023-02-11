#include <stdio.h>

int main()
{
    int n;
    printf("enter number of terms :\n");
    scanf("%d", &n);

    int a = 0;
    int b = 1;

    for(int i = 1; i <= n; i++)
    {
        if(i == 1){
            printf("%d ", a);
        }
        else if(i == 2){
            printf("%d ", b);
        }
        
        int c = a + b;

        a=b;
        b=c;
        printf("%d ", c);
    }
    return 0;
}