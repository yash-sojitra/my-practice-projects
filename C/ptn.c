# include <stdio.h>

int main(int argc, char **argv)
{
    for (int i = 1; i <=5; i++)
    {
        for (int j = 5; j >=i; j--)
        {
            printf("%c",'*');
        }
        printf("\n");
    }
    return 0;
}