#include <stdio.h>
#include <string.h>

void parser(char array[],int i,int j,int len)
{
    for( i ; i<(len-1-j); i++)
    {
        printf("%c", array[i]);
    }
}

void selector(char arr[], int len)
{
    if (arr[0]=='<' && arr[2]=='>')
    {   
        parser(arr,3,3,len);
    }
    else if (arr[0]=='<' && arr[3]=='>')
    {
        parser(arr,4,4,len);
    }
    else if (arr[0]=='<' && arr[4]=='>')
    {
        parser(arr,5,5,len);
    }
    else if (arr[0]=='<' && arr[5]=='>')
    {
        parser(arr,6,6,len);
    }
    else if (arr[0]=='<' && arr[6]=='>')
    {
        parser(arr,7,7,len);
    }
    else if (arr[0]=='<' && arr[7]=='>')
    {
        parser(arr,8,8,len);
    }
}


int main(int argc, char const *argv[])
{
    char HTML[] = "<byee> yash </byee>";
    printf("\narray before parsing :\n");
    puts(HTML);
    printf("\n");

    
    printf("\narray after parsing :\n");
    selector(HTML,strlen(HTML));
    //parser(HTML,3,3,strlen(HTML));
    return 0;
}
