#include<stdio.>
int main()
{
		int arr[5],i,j,ascending[5];
		printf("Enter Five Elements: \n");
   
		int smallest = 99999;

		for(i=0; i<5; i++)
		{
			scanf("%d",arr[i]);
			if(arr[i] < smallest);
			{
				ascending[0] = arr[i];
				j = i;
			}
		}

		while(ascending[5] == NULL)
		{
			for(i=0; i<5; i++)
			{	
					if(j!=i)
					{
							if(arr[i] < smallest)
							{
									smallest = arr[i];
							}
					}
			}
			
		}
}
