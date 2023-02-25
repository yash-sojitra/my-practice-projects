#include <stdio.h> 
void main(){
    int matrix[3][3], ans[3][3];
    printf("Enter matrix elements:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
            scanf("%d", &matrix[i][j]);
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
            ans[j][i] = matrix[i][j];
    }
    printf("Original Matrix:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
    printf("Transpose of Matrix:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
            printf("%d ", ans[i][j]);
        printf("\n");
    }
}