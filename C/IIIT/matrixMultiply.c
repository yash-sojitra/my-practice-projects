#include <stdio.h>
void main(){
    int mat1[3][3], mat2[3][3], ans[3][3] ={{0,0,0},{0,0,0},{0,0,0}}, transpose[3][3];
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
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
            transpose[j][i] = mat2[i][j];
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 3; k++)
                ans[i][j] += (mat1[i][k] * transpose[j][k]);
        }
    }
    printf("multiplication of both the matrices is: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
            printf("%d ", ans[i][j]);
        printf("\n");
    }
}