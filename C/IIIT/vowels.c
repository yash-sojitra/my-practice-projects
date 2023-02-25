#include <stdio.h>
#include <string.h>
int main()
{
    char vowel[] = "aeiouAEIOU";
    char str[100];
    printf("enter a string: \n");
    gets(str);
    int count1 = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        for (int j = 0; j < strlen(vowel); j++)
        {
            if(str[i] == vowel[j])
                count1++;
        } 
    }
    
    printf("no of vowels in string are: \n%d",count1);

    return 0;
}