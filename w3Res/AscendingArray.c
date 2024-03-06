#include<stdio.h>
int main()
{
		int arr[5],i,temp,j;
		printf("Enter 5 Elements: \n");
		for(i=0; i<5; i++)
		{	
			scanf("%d",&arr[i]);
		}
		for(i=0; i<5; i++)
		{
			for(j=i+1; j<5; j++)
			{
				if(arr[i] > arr[j])
				{
					temp = arr[j];
					arr[j] = arr[i];
					arr[i] = temp;
				}
			}
		}
		for(i=0; i<5; i++)
		{
			printf("%d ",arr[i]);
		}
		
}

