#include<stdio.h>
int main()
{
		int n,i,j;
		printf("Enter N: ");
		scanf("%d",&n);
		for(i=1; i<=n; i++)
		{
				if(i==1 || i==n)
				{
						for(j=1;j<=10; j++)
						{
								printf("#");
						}
				}
				else
				{
						for(j=1; j<=10; j++)
						{
								if(j==1 || j==n)
								{
										printf("#");
								}
								else
								{
										printf(" ");
								}
						}
				}
				printf("\n");
		}
}
