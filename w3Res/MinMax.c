#include<stdio.h>
int main()
{
		int max = 0, min = 99999;
		float n1,n2,n3,n4,avg; 
		printf("Enter 4 Values: \n");
		scanf("%f %f %f %f",&n1, &n2, &n3, &n4);
		
		avg = (n1+n2+n3+n4) / 4;
		
		if(n1 > n2){
			min = n2;
			max = n1;
		}
		if(n2 > n3){
			min = n3;
			max = n2;
		}
		if(n3 > n4){
			min = n4;
			max = n3;
		}
		else{
			min = n1;
			max = n4;
		}
		printf("Biggest element: %d",max);
		printf("\nSmallest element: %d",min);
		printf("\nAverage element: %.1f",avg);
}
