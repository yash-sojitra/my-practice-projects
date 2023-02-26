#include <stdio.h>

void main() {
    int* arr[3][3];
    int val = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] = &val;
            val++;
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", *arr[i][j]);
        printf("\n");
    }
}
