#include<stdio.h>
int main()
{
		int n,i=1,count=0;
		float sum=0;

		printf("Enter 5 numbers- \n");
		while(i<=5)
		{
			scanf("%d",&n);
			if(n>=0){
				sum=sum+n;
				count++;
			}
			i++;
		}
		printf("Positive Numbers: %d\n",count);
		printf("Average: %.2f",sum/count);
		
}
