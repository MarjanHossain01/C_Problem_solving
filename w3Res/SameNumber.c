#include<stdio.h>
int test(int n1, int n2)
{
		return n1==n2 ? (n1+n2)*3 : n1 + n2;
}
int main()
{	
		int n1,n2;
		printf("Enter 2 numbers: \n");
		scanf("%d %d",&n1,&n2);

		printf("%d",test(n1,n2));
}
