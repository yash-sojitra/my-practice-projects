#include <stdio.h>
#include <string.h>

void lowerCase(char str[],int n){
    for (int i = 0; i < n; i++){
            if(65<=str[i] && str[i]<=90)
                str[i] = str[i] + 32;
    }
}

void upperCase(char str[],int n){
    for (int i = 0; i < n; i++){
            if(97<=str[i] && str[i]<=122)
                str[i] = str[i] - 32;
    }
}
void main(){
    printf("enter string :\n");
    char str[100];
    gets(str);
    int n = strlen(str);
    printf("without using predefined function :\n");
    lowerCase(str,n);
    puts(str);
    upperCase(str,n);
    puts(str);
    printf("without using predefined function :\n");
    strlwr(str);
    puts(str);
    strupr(str);
    puts(str);
}