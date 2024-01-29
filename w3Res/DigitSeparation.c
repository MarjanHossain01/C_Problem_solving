//Program to separate digits of a 7 digit integer
#include<stdio.h>
int main()
{
		int n,remainder,temp,digits[7],i;
		printf("Enter a 7 digit integer: ");
		scanf("%d",&n);

		if(n <= 999999)
		{
				printf("ERROR! WRONG INPUT\nQUITTING..");
				return 0;
		}

		temp = n;		
		for(i=0; i<7; i++)
		{
				digits[i] = temp % 10;
				temp = temp / 10;
		}
		for(i=6; i>=0; i--)
		{
				printf("%d  ",digits[i]);
		}

}
