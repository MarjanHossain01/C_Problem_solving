#include<stdio.h.>
int main()
{
		int i,n[5],max=0;
		for(i=0; i<5; i++){
				printf("Enter %d number: ",i+1);
				scanf("%d",&n[i]);
				if(n[i] > max){
					max = n[i];
				}
		}
		printf("Biggest Number: %d",max);


}
