#include <stdio.h>
int main()
{
    int i = 1, j = 1, x, y;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if (i + j >= 6 && j - i <= 4)
            {
                for (x = 1; x <= i; x++)
                {
                    printf("%d", x);
                }
                for (y = i - 1; y > 0; y--)
                {
                    printf("%d", y);
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }