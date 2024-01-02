#include<stdio.h>
int main()
{
	int n1, n2, n3;
	printf("Enter Three numbers: \n");
	scanf("%d %d %d",&n1, &n2, &n3);

	if(n1 > n2 && n1 > n3){
		printf("%d is the biggest",n1);
	}
  if(n2 > n1 && n2 > n3){
		printf("%d is the biggest",n2);
	}
	if(n3 > n1 && n3 > n2){
		printf("%d is the biggest",n3);
	}

}
