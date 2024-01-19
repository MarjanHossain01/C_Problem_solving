#include<stdio.h>
int main()
{
		int arr[5], i;
	
		printf("Enter 5 Elements: ");
		for(i=0; i<5; i++){
				scanf("%d",&arr[i]);
		}
		for(i=0; i<5; i++){
				if(arr[i]< 5){
				printf("ARR[%d] = %d\n",i,arr[i]);
				}
		}
}
