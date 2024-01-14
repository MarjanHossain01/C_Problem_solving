#include<stdio.h>
int main()
{
		int n,i;
		printf("Enter N: ");
		scanf("%d",&n);
		for(i=1; i<=n; i++)
		{
				printf("%d %d %d\n",i ,i*i ,i*i*i);
		}

}
