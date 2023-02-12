#include <stdio.h>
#include <string.h>
void main(){
    printf("Enter string :");
    char str[100];
    gets(str);
    int n = strlen(str);
    int ans = 1;
    for (int i = 0; i < n/2; i++){
        if(str[i] != str[n-i-1]){
            ans = 0;
            break;
        }
    }
    if (ans)
        printf("it's palindrome");
    else
        printf("not palindrome");
}