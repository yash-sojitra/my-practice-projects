#include <stdio.h>
#include <string.h>
void main(){
    char str[100];
    char find[100];
    printf("enter a string: \n");
    gets(str);
    printf("enter a word to find it's frequency in string: \n");
    gets(find);
    strlwr(str);
    strlwr(find);
    int count = 0;
    for (int i = 0; i < strlen(str); i++){
        int flag = 1;
        if (str[i] == find[0]){
            for (int j = 0; j < strlen(find); j++){
                if (str[i + j] != find[j]){
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
                count++;
        }
    }
    printf("no of '%s' in the string is: %d\n",find,count);
}