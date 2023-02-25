#include <stdio.h>
int fact_itr(int n){
    int ans =1;
    for (int i = 1; i <= n; i++)
        ans =ans * i; 
    return ans;
}
int fact_rec(int n){
    if(n ==0 || n == 1)
        return 1;
    else
        return n*fact_rec(n-1);
}
void main(){
    int n;
    printf("enter a number: \n");
    scanf("%d",&n);
    printf("factorial of %d itreatively : \n %d\n",n, fact_itr(n));
    printf("factorial of %d recursively : \n %d\n",n, fact_rec(n));
}