#include <stdio.h>

int main(){

    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);

    printf("ans = %d\n",x-(~y)-1);

    return 0;
}