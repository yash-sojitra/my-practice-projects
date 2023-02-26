#include <stdio.h>
#include <string.h>
void main()
{
    char str1[128];
    char str2[128];
    printf("enter string 1: \n");
    gets(str1);
    printf("enter string 2: \n");
    gets(str2);
    char *ptr1 = str1, *ptr2 = str2;
    int flag = 1;
    if(strlen(str1)!= strlen(str2))
        flag = 0;
    else{
        for (int i = 0; i < strlen(str1); i++){
            if(*(ptr1+i) != *(ptr2+i)){
                flag = 0;
                break;
            }
        }
    }
    if(flag)
        printf("both are same\n");
    else
        printf("both are diff\n");

}