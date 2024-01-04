#include<stdio.h>
int main()
{
		int n,i=1;
		printf("Enter N: ");
		scanf("%d",&n);

		while(i<=100)
		{
				if(i%n==3){
						printf("%d ",i);
				}
				i++;
		}

}
