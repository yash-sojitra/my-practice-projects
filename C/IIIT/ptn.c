#include <stdio.h>

int main(int argc, char **argv)
{
    char a = 'A';

    for (int i = 1; i <= 4; i++)
    {

        int k = 0;
        for (int j = 1; j <= 7; j++)
        {
            if (j > 4 - i + 1 && j < 4 + i - 1)
                printf(" ");
            else
                printf("%c", a+k);


            if (j < 4)
            {
                ++k;
            }
            else
            {
                --k;
            }
        }

        printf("\n");
    }
    return 0;
}