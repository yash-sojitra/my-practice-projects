#include <stdio.h>
#include <string.h>
void main(){
    char str[100];
    printf("input a string :\n");
    gets(str);
    int n = strlen(str);
    int digit = 0, alphabet = 0, character = 0;
    for (int i = 0; i < n; i++){
        if(48<=str[i] && str[i]<=57)
            digit++;
        else if ((65<= str[i] && str[i]<=90) || (97<= str[i] && str[i]<=122))
            alphabet++;
        else
            character++;
    }
    printf("digits : %d\nalphabets : %d\nspecial characters : %d", digit, alphabet,character);
}