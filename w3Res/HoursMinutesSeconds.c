#include<stdio.h>
int main()
{
	int seconds;
	printf("Enter Seconds: ");
	scanf("%d",&seconds);

	printf("Hours: %d\n",seconds/3600);
	seconds = seconds - (3600 * (seconds / 3600));

	printf("Minutes: %d\n",seconds/60);
	seconds = seconds - (60 * (seconds / 60));

	printf("Seconds: %d",seconds);
}
