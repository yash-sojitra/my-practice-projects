#include <stdio.h>
#include <string.h>

int main()
{
   for (int i = 0; i < 7; i++)
    {
        int coef = 1;
        for (int k =7-i; k > 0; k--)
            printf("%c",' ');

        for (int j = 1; j <=i; j++)
        {
            printf("%d%c",coef,' ');
            coef=coef*(i-j)/j;
        }
        printf("\n");
    }
   return 0;
}