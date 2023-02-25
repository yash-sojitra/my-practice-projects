#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    printf("enter two strings: \n");
    gets(str1);
    gets(str2);
    int n1 = strlen(str1), n2 = strlen(str2);

printf("%d %d", n1, n2);

    char ans[n1+n2];

    for (int i = 0; i < n1; i++)
    {
        ans[i] = str1[i];
    }
    for (int j = 0; j < n2; j++)
    {
        ans[n1+j] = str2[j];
    }

    printf("\nthe resultant string is: \n");
    puts(ans);
    
    return 0;
}