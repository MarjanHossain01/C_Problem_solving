#include<stdio.h>
int main()
{
		int i,reverse=0,temp,digit,n,digits[10],flag=0;
		printf("Enter a positive integer: ");
		scanf("%d",&n);
		temp = n;	
	  while(temp != 0)
		{
				digit = temp % 10;
				reverse = reverse * 10 + digit;
				temp = temp / 10;
		}
		if(reverse - n != 0)
		{
				printf("%d is not a palindrome number",n);
		}
		else
		{
				for(i=2; i<n; i++)
				{
						if(n/i==0)
						{
								flag++;
						}
				}
				if(flag==0)
				{
						printf("%d is a prime palindrome",n);
				}
		}
}
