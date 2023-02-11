#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c;

    printf("enter coefficents of quadratic equation Ax^2 + Bx + C: \n");
    printf("A : ");
    scanf("%lf", &a);
    printf("B : ");
    scanf("%lf", &b);
    printf("C : ");
    scanf("%lf", &c);

    double D = pow(b,2) - (4*a*c);
    //printf("D = %lf", D);
    double d = sqrt(D);
    //printf("d = %lf", d);

    double root1 = (-b + d)/2*a;
    //printf("root1 = %lf", root1);
    double root2 = (-b - d)/2*a;
    //printf("root2 = %lf", root2);

    printf("\nthe roots of quadratic equation are : \n%lf \n%lf", root1,root2);
    return 0;
}