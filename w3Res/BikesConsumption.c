#include<stdio.h>
int main()
{
		int fuel, distance;

		printf("Enter Distance Covered: ");
		scanf("%d",&distance);
		printf("Enter Fuel Consumed: ");
		scanf("%d",&fuel);

    float avg = distance / fuel;

		printf("Bike's Average Consumption: %.2f",avg);
}

