#include<stdio.h>
int main()
{
		int n,i=1;
		printf("Enter N: ");
		scanf("%d",&n);
		while(i<=n){
			if(i%2==0){
				printf("%d^2: %d\n",i,i*i);
			}
			i++;
		}
}
