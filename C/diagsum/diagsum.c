#include <stdio.h>

void main()
{

    int matrix[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter the value for element (%d,%d) for 3x3 matrix : \n", i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
        
    }
    


    //int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int psum = 0;
    int asum = 0;

    for (int i = 0; i < 3; i++)
    {
        psum = psum + matrix[i][i]; 
        asum = asum + matrix[i][2-i];  
    }
    
    printf("sum of pricipal diagonal is : %d\n", psum);
    printf("sum of adjacent diagonal is : %d", asum);

}