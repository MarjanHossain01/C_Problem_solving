#include<stdio.h>
int main(void)
{
		int n,i,j=1,sum=0;
		printf("Enter N (<100): ");
		scanf("%d",&n);

		for(i=1; i<=n; i=i+j){
			j++;
			printf("You stupid n- %d\n",i);
			sum = sum + i*i*i*i;
			}
}
