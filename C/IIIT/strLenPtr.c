#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];
    printf("Enter a string: \n");
    gets(str);
    int length = 0;
    char *ptr = str;
    while (*ptr != '\0') {
        length++;
        ptr++;
    }
    printf("Length of the string: %d\n", length);
}