#include <stdio.h>
#include <string.h>
int main()
{
    char str[128], *ptr = str;
    printf("enter a string: ");
    gets(str);
    int n = strlen(str);
    for (int i = 0; i < (n/2); i++)
    {
        char temp = *(ptr+i);
        *(ptr+i) = *(ptr+(n-i-1)); 
        *(ptr+(n-i-1)) = temp;
    }
    printf("resultant string: ");
    puts(str);

    return 0;
}