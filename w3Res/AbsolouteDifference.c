#include<stdio.h>
int difference(int n)
{
		return n <= 51 ? 51-n : (n-51)*3;
}
int main()
{
		int n;
		scanf("%d",&n);
		printf("%d",difference(n));
}
