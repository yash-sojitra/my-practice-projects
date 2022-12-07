#include <stdio.h>

void main()
{

    int num[] = {-1, -4, -2, -6, -3, -6, -3, -4, -6, -7, -14, -8};
    int greatest = 0;
    int smallest = 0;

    for (int i = 0; i < (sizeof(num) / 4); i++)
    {
        if (i == 0)
        {
            greatest = num[i];
        }
        if (greatest <= num[i])
        {
            greatest = num[i];
        }
        else
        {
            continue;
        }
    }

    for (int i = 0; i < (sizeof(num) / 4); i++)
    {

        if (i == 0)
        {
            smallest = num[i];
        }
        else if (smallest >= num[i])
        {
            smallest = num[i];
        }
        else
        {
            continue;
        }
    }

    printf("the range of the given list of numbers is : %d", greatest - smallest);
}