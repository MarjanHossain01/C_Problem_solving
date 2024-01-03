#include<stdio.h>
int main()
{
		int p,q,r,s;
		printf("Enter P: ");
		scanf("%d",&p);
		printf("Enter Q: ");
		scanf("%d",&q);
		printf("Enter R: ");
		scanf("%d",&r);
		printf("Enter S: ");
		scanf("%d",&s);

		if(p%2==0 && p && q && r >= 0){
			if(q>r && s > p && r+s > p+q){
				printf("Correct Values");
			}
			else{
				printf("Incorrect Values");
			}
		}

}
