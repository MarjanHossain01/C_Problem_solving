#include<stdio.h>
int main()
{
	int arr[5],i;
	printf("Enter first element of array: ");
	scanf("%d",&arr[0]);
	
	printf("%d\n",arr[0]);
	for(i=1; i<5; i++)
	{
		arr[i] = arr[i-1]*3;
		printf("%d\n",arr[i]);
	}
}
