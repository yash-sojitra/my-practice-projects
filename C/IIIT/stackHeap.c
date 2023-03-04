#include <stdio.h>
#include <stdlib.h>
void main(){
    int array[5] = {1, 2, 3, 4, 5};
    printf("Stack allocation:\n");
    printf("Size of array: %ld bytes\n", sizeof(array));
    printf("Address of array: %p\n", &array);
    int *ptr = malloc(5 * sizeof(int));
    printf("\nHeap allocation:\n");
    printf("Size of array: %ld bytes\n", 5*sizeof(int));
    printf("Address of array: %p\n", ptr);
    free(ptr);
}