#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char name1[20];
    char name2[20];

    char mid[] = " is a friend to ";

    printf("write a name:");
    gets(name1);
    printf("write second a name:");
    gets(name2);

    puts(strcat(strcat(name1, mid), name2));

    return 0;
}


