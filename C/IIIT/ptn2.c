#include <stdio.h>

int main(int argc, char **argv)
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (j == 1 || j == 7 || i == j)
            {
                printf("%c", '*');
            }
            else
            {
                printf("%c", ' ');
            }
        }
        printf("\n");
    }
    return 0;
}