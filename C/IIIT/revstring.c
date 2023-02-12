#include <stdio.h>
#include <string.h>
void main(){
    printf("Enter string :");
    char str[100];
    gets(str);
    int n = strlen(str);
    for (int i = 0; i < n/2; i++){
        int temp = str[i];
        str[i] = str[n-i-1];
        str[n-i-1] = temp;
    }
    puts(str);
    puts(strrev(str));
}