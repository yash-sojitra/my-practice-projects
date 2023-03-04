#include <stdio.h>
#include <string.h>
int vowel1(char str[]){
    char vowel[] = "aeiouAEIOU";
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        for (int j = 0; j < strlen(vowel); j++)
        {
            if(str[i] == vowel[j])
                count++;
        } 
    }
    return count;
}
int vowel2(char str[]){
    int count = 0;
    char vowel[] = "aeiouAEIOU";
    for (int i = 0; i < strlen(str); i++){
        if (strchr(vowel, str[i]))
            count++;
    }
    return count;
}
void main(){
    char str[100];
    printf("enter a string: \n");
    gets(str);
    printf("no of vowels in string without using predefined function are: \n%d",vowel1(str));
    printf("\nno of vowels in string using predefined function are: \n%d",vowel2(str));
}