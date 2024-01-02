#include<stdio.h>
int main()
{
	int height, width;
	printf("Enter Rectangle Height: ");
	scanf("%d",&height);
	printf("Enter Rectangle Width: ");
	scanf("%d",&width);
	
	printf("Perimeter of Rectangle: %d inches\n",2*(height+width));
	printf("Area of Rectangle: %d inches",height*width);

	return 0;
}
