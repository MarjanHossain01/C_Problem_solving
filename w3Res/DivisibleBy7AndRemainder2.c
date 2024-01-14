#include<stdio.h>
int main()
{
		int n1,n2;
		printf("Enter N1: ");
		scanf("%d",&n1);
		printf("Enter N2: ");
		scanf("%d",&n2);

		while(n1<n2){
			if(n1 % 7 == 2 || n1 % 7 == 3){
					printf("%d\n",n1);
			}
			n1++;
		}	
}
