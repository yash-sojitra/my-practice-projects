#include <stdio.h>
#include <stdlib.h>
void main() {
    int** arr = malloc(3 * sizeof(int*));
    for (int i = 0; i < 3; i++)
        arr[i] = malloc(3 * sizeof(int));
    int val = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] = val;
            val++;
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) 
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
        free(arr[i]);
    free(arr);
}
