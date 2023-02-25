#include <stdio.h>
int isPerfect(int num){
   int i, sum = 0;
   for(i = 1; i <= num/2; i++){
      if(num % i == 0)
         sum += i;
   }
   if(sum == num) 
      return 1;
   else 
      return 0;
}
void main(){
   int start,end;
   printf("Enter the starting and ending range: ");
   scanf("%d %d", &start, &end);
   printf("Perfect numbers between %d and %d are: \n", start, end);
   for(int i = start; i <= end; i++) {
      if(isPerfect(i))
         printf("%d\n", i);
   }
}