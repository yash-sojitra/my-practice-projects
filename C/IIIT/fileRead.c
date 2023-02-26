# include <stdio.h>
# include <string.h>
void main( ){
	FILE *fp ;
	char str[50];
	fp = fopen("name.txt", "r") ;
	if ( fp == NULL )
		printf( "name.txt file failed to open." ) ;
	else
		fgets(str,50,fp);
	fclose(fp) ;
    puts(str);
}
