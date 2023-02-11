#include <stdio.h>
void main(){
    float a, b, c, d, e, f, g;
    scanf("%f %f %f %f %f %f %f",&a,&b,&c,&d,&e,&f,&g);
    float ans = ((a + b / c * d - e)*(f - g));
    printf("%f", ans);
}