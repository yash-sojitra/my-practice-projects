#include <stdio.h>

void printMatrix(int* arr[3][3])
{
    for (int k = 0; k < 3; k++)
    {
        for (int  l = 0; l < 3; l++)
        {
            printf("%d ",arr[k][l]);
        }
        printf("\n");
    }
}


int main()
{
    int mat1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("matrix 1: \n");
    printMatrix(&mat1[0][0]);

    printf("matrix 2: \n");
    printMatrix(&mat2[0][0]);

    printf("sum: \n");
    printMatrix(&sum[0][0]);
    
    return 0;
}