// Program to calculate Circumference of Circle
#include<stdio.h>
int main()
{
	int radius;
	float pi=3.141592;
	printf("Enter Radius of Circle: ");
	scanf("%d",&radius);
	printf("Circumference of Circle is: %.2f\n", 2*pi*radius);
	printf("Area of Circle is: %.2f", pi*(radius*radius));
}
