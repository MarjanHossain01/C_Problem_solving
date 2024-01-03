#include<stdio.h>
int main()
{
		char month[][10] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
		int n;

		printf("Enter Month Number (1-12): ");
		scanf("%d",&n);

		printf("Month: %s",month[n-1]);
}
