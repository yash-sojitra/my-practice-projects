#include <stdio.h>

void printPtn1(int choice, int rows)
{   
    char a = 'A';

    int n = 1;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++){
            switch (choice){
            case 0:
                printf("%c ",'*');
                break;
            case 1:
                printf("%d ",j);
                break;
            case 2:
                printf("%c ", a+j-1);
                break;
            case 3:
                printf("%d ",n++);
                break;
            }
        }
        printf("\n");
    }
}

void printPtn2(int choice, int rows)
{   
    char a = 'A';

    int n = 1;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 5; j >= i; j--){
            switch (choice){
            case 0:
                printf("%c ",'*');
                break;
            case 1:
                printf("%d ",5-j+1);
                break;
            case 2:
                printf("%c ", a+(5-j));
                break;
            case 3:
                printf("%d ",n++);
                break;
            }
        }
        printf("\n");
    }
}

void printPtn3(int choice, int r)
{

    for (int i = 0; i <= r; i++)
    {
        int k = i + 1;
        for (int j = 0; j <= (2 * r); j++)
        {

            switch (choice)
            {
            case 0:
                if (j >= (r - i) && j <= (r + i))
                    printf("%c ", '*');
                else
                    printf("%c ", ' ');
                break;

            case 1:
                if (j >= (r - i) && j <= (r + i))
                {
                    printf("%d ", k);

                    if (j < r)
                        k++;
                    else
                        k--;
                }
                else
                    printf("%c ", ' ');
                break;
            }
        }
        k++;
        printf("\n");
    }
}

void main(){
    
    printPtn1(0,5);
    printPtn1(1,5);
    printPtn1(2,5);
    printPtn2(0,5);
    printPtn2(1,5);
    printPtn2(2,5);
    printPtn3(0,4);
    printPtn3(1,4);

}