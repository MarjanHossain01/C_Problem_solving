#include<stdio.h>
int main()
{
		int n,i;

		printf("Enter N: ");
		scanf("%d",&n);
		printf("Odd numbers from 1 to %d:\n",n);
		for(i=1; i<=n; i++){
			if(i%2!=0){
				printf("%d ",i);
			}
		}
}
