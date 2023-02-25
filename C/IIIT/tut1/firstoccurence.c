#include <stdio.h>
#include <string.h>
void main(){
    char str[100];
    printf("input a string :\n");
    gets(str);
    int n = strlen(str);
    for (int i = 0; i < n; i++){
        if(str[i] == 'i' || str[i] == 'I'){
            for(int j = i; j < n; j++)
                str[j] = str[j+1];
            break;
        }
    }
    printf("the resultant string is :\n");
    puts(str);
}