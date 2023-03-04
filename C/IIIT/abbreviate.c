#include <stdio.h>
#include <string.h>
void main(){
    char name[256];
    printf("enter your full name: \n");
    gets(name);
    printf("your name abbreviation is: \n");
    printf("%c",name[0]);
    for (int i = 0; i < strlen(name); i++){
        if (name[i] == ' ')
            printf("%c", name[i+1]);        
    }
}