#include<stdio.h>
int main()
{
		int n;
		printf("Enter N: ");
		scanf("%d",&n);
		if(n%2!=0)
		{
				if(n>=0){
					printf("%d is a Positive Odd number",n);
				}
				else{
					printf("%d is a Negative Odd number",n);
				}
		}
		else
		{
				if(n>=0){
					printf("%d is a Positive Even Number",n);
				}
				else{
					printf("%d is a Negative Even Number",n);
				}
		}
}
