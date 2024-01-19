#include<stdio.h>
int main()
{
	int arr[5], i,temp;

	for(i=0; i<5; i++)
	{
			scanf("%d",&arr[i]);
	}

	temp = arr[0];
	arr[0] = arr[4];
	arr[4] = temp;

	temp = arr[1];
	arr[1] = arr[3];
	arr[3] = temp;

	for(i=0; i<5; i++)
	{
			printf("%d ",arr[i]);
	}

}
