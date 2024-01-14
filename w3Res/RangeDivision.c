#include<stdio.h>
int main()
{
		int n1, n2, sum;
		printf("Enter Two Numbers: ");
		scanf("%d %d",&n1, &n2);
		
		while(n1 <= n2)
		{
				if(n1 % 17 != 0){
						sum = sum + n1;
				}
				n1++;
		}
		printf("Sum: %d",sum);

}
