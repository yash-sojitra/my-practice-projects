#include <stdio.h>
#include <math.h>
void main(){
    double a,b,c;
    printf("enter coefficents of quadratic equation Ax^2 + Bx + C: \nA,B,C : ");
    scanf("%lf %lf %lf",&a,&b,&c);
    double D = sqrt(pow(b,2) - (4*a*c));
    double root1 = (-b + D)/2*a;
    double root2 = (-b - D)/2*a;
    printf("\nthe roots of quadratic equation are : \n%lf \n%lf", root1,root2);
}