#include<stdio.h>
int main()
{
		int arr[5];
		int i,j,temp;
		printf("Enter 5 Elements: ");
		
		for(i=0; i<5; i++)
		{
				scanf("%d",&arr[i]);
		}

		for(i=0; i<5; i++)
		{
				for(j=i+1; j<5; j++)
				{
						if(arr[j] > arr[i])
						{
								temp = arr[j];
								arr[j] = arr[i];
								arr[i] = temp;
						}
				}
		}
		
		printf("Array in Descending order: \n");
		for(i=0; i<5; i++)
		{
				printf("%d ",arr[i]);
		}
}
