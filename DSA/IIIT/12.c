#include <stdio.h>

int main()
{
	int arr[100];
	int i, x,y, pos, n = 10;

	for (i = 0; i < 10; i++)
		arr[i] = i + 1;

	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
	


	x = 50;

	pos = 5;


	n++;

	for (i = n - 1; i >= pos; i--)
		arr[i] = arr[i - 1];

	arr[pos - 1] = x;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
	
	//delete
	pos=7;
	n--;
	for(i=pos-1;i<=n;i++)
	    arr[i]=arr[i+1];
	    
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
	
	//traverse
	for (i = 0; i < n; i++)
		printf("arr[%d]=%d\n",i,arr[i]);
	printf("\n");
	
	//update
	printf("enter the position to be updated");
	scanf("%d",&pos);
	printf("enter the number");
	scanf("%d",&y);
	
	
	arr[pos-1]=y;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
	
	//search
	printf("enter the number to search");
	scanf("%d",&y);
	for(i=0;i<n;i++){
	    if(arr[i]==y){
	        printf("%d",i+1);
	    }
	}
	

	return 0;
}

