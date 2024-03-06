#include<stdio.h>
int main()
{
		int count,n,digit,temp;
		printf("Enter N: ");
		scanf("%d",&n);
		temp = n;
		while(temp!=0)
		{
				digit = temp % 10;
				if(digit == 3)
				{
						count++;
				}
				temp = temp / 10;
		}
		printf("%d 3's",count);
}
