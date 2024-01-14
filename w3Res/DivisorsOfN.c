#include<stdio.h>
int main()
{
		int i=2,n;
		printf("Enter N: ");
		scanf("%d",&n);
		printf("1 ");
		while(i<n){
			if(n%i==0){
				printf("%d ",i);
			}
			i++;
		}

		printf("%d ",n);

}
