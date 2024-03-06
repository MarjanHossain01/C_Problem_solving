#include<stdio.h>
int main()
{
		int arr[5]; 
		int i,test=0;

		for(i=0; i<5; i++) //Taking Input
		{
			scanf("%d",&arr[i]);
		}
		
		while(test<6) //Check if a value is duplicated
		{
			for(i=test+1; i<6; i++)
			{

				if(arr[i] == arr[test])
				{
					printf("%d is duplicated\n",arr[test]);
				}
			}
			test++;
		}

		return 0;
}
