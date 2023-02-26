#include <stdio.h>
#include <string.h>
void main(){
    FILE *fp;
    char str[100];
    fp = fopen("name.txt", "r");
    if (fp == NULL)
		printf( "name.txt file failed to open." ) ;
    else
        fgets (str,100,fp);
    fclose(fp);
    printf("no of characters in name.txt file: %d\n", strlen(str));
}