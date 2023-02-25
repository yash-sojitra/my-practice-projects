#include <stdio.h>
#include <string.h>
void main() {
    char str1[50], str2[50];
    int i, flag = 0;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    if(strcmp(str1, str2) == 0) 
        printf("The strings are equal.\n");
    else 
        printf("The strings are not equal.\n");
    for(i=0; str1[i]!='\0' && str2[i]!='\0'; i++) {
        if(str1[i] != str2[i]) {
            flag = 1;
            break;
        }
    }
    if(flag == 0 && str1[i] == '\0' && str2[i] == '\0') 
        printf("The strings are equal.\n");
    else 
        printf("The strings are not equal.\n");
}
