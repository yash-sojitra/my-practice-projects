#include <stdio.h>

void main()
{
    int mat1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},  mat2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, sum[3][3];

    printf("Enter matrix 1 elements:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
            scanf("%d", &mat1[i][j]);
    }

    printf("Enter matrix 2 elements:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
            scanf("%d", &mat2[i][j]);
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("sum: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }
}