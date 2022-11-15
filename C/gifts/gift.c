#include <stdio.h>

int main()
{

    int response;

    printf("Welcome to the gifting session for your exams\n\n");

    printf("write how many exams you paseed: \n");
    scanf("%d", &response); 

    if (response == 2)
    {
        printf("Congratulations! You get 45rs as your prize!\n");
    }
    else if(response == 1)
    {
        printf("Congratulations! You get 15rs as your prize!\n");
    }
    else if (response == 0)
    {
        printf("Sorry, better luck next time!\n");
    }
       
    return 0;
}
