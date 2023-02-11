#include <stdio.h>

int main()
{

    float a, b, c, d, e, f, g;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);
    scanf("%f", &e);
    scanf("%f", &f);
    scanf("%f", &g);
    float ans = ((a + b / c * d - e)*(f - g));
    printf("%f", ans);
    return 0;
}