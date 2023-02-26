#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main(){
    char str1[100], str2[100];
    char *ptr1, *ptr2, *result;
    int len1, len2, i, j;
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    len1 = strlen(str1);
    len2 = strlen(str2);
    result = (char *)malloc((len1 + len2 + 1) * sizeof(char));
    ptr1 = str1;
    for (i = 0; i < len1; i++)
        *(result + i) = *(ptr1 + i);
    ptr2 = str2;
    for (j = 0; j < len2; j++)
        *(result + i + j) = *(ptr2 + j);
    *(result + i + j) = '\0';
    printf("The concatenated string is: %s\n", result);
    free(result);
}
