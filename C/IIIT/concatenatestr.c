#include <stdio.h>
#include <string.h>
void main(){
    char str1[100], str2[100],ans[100];
    printf("enter two strings: \n");
    gets(str1);
    gets(str2);
    int i = 0, j = 0;
    for (i = 0; str1[i] !='\0'; i++)
        ans[i] = str1[i];
    for (j = 0; str2[j] !='\0'; j++)
        ans[i+j] = str2[j];
    printf("\nthe resultant string without using predefined function is: \n");
    puts(ans);
    strcat(str1, str2);
    printf("\nthe resultant string using predefined function is: \n%s",str1);
}