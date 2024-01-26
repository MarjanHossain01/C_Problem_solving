#include<stdio.h>
int main()
{
		int i,j,flag,count;
		printf("Prime numbers until 200: \n");

		for(i=3; i<=200; i++)
		{
				flag = 0;
				for(j=2; j<i; j++)
				{
						if(i%j==0){
							flag++;
						}
				}
				if(flag==0)
				{
						printf("%d ",i);
						count++;
						if(count % 20 == 0)
						{
							printf("\n");
						}
				}
				
		}
}
