#include <stdio.h>
#include <string.h>
int countChar1(char str[], char ch){
    int count = 0;
    char *ptr;
    ptr = strchr(str, ch);
    while (ptr != NULL){
        count++;
        ptr = strchr(ptr + 1, ch);
    }
    return count;
}
int countChar2(char str[], char ch){
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == ch)
            count++;
    }
    return count;
}
void main(){
    char str[100], ch;
    printf("Enter a string: ");
    gets(str);
    printf("Enter a character to count: ");
    scanf("%c", &ch);
    printf("using predefined function: %d\n", countChar1(str, ch));
    printf("without using predefined function: %d\n", countChar2(str, ch));
}
