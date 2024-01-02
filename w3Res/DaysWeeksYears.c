#include<stdio.h>
int main()
{
	int inputDays,years,weeks;
	printf("Enter days: ");
	scanf("%d",&inputDays);

	years = inputDays/365;
	

	inputDays = inputDays-(years*365);
	weeks = inputDays/7;
	inputDays = inputDays-(weeks*7);

	printf("Years: %d\n",years);
	printf("Weeks: %d\n",weeks);
  printf("Days: %d",inputDays);
}
