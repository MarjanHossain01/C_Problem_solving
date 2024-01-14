#include<stdio.h>
int main()
{
		int principle, time, SimpleI;
		float rate;
		printf("Enter Principle: ");
		scanf("%d",&principle);

		printf("Enter Rate: ");
		scanf("%f",&rate);

		printf("Enter time: ");
		scanf("%d",&time);
		
		rate = rate / 100;
		SimpleI = (principle*rate)*time;
		printf("Simple Interest: %d",SimpleI);


}
