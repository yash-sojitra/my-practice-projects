#include <stdio.h>
void main(){
    FILE *fp1,*fp2;
    char str[100];
    fp1 = fopen("name.txt", "r");
    fp2 = fopen("name2.txt", "w");
    if (fp1 == NULL)
		printf( "name.txt file failed to open." ) ;
    else
        fgets (str,100,fp1);

    if (fp2 == NULL)
		printf( "name2.txt file failed to open." ) ;
    else
        fputs(str,fp2);
    fclose(fp1);
    fclose(fp2);
}