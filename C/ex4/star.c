#include <stdio.h>

int triangle(int rows);
int triangle_rev(int rows);

int main(int argc, char const *argv[])
{
    int ptn,rows;

    printf("type 0 to print regular star pattern and 1 to print reverse star pattern\n");
    scanf("%d", &ptn);
    printf("type number of rows you want\n");
    scanf("%d", &rows);

    if (ptn == 0)
    {
        triangle(rows);
    }
    else if (ptn == 1)
    {
        triangle_rev(rows);
    }

    return 0;
}

int triangle(int rows)
{
    for (int i = 0; i <= rows; i++){
        for (int j = 0; j < i; j++)
        {
            printf("%c", '*');
        }
        printf("\n");
    }

}

int triangle_rev(int rows)
{
    for (int i = rows; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c", '*');
        }
        printf("\n");
    }
    
}