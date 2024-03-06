#include<stdio.h>
int main()
{
		int i,bars,j=0;
		printf("How many bars? \n");
		scanf("%d",&bars);
		int height[bars];
		for(i=0; i<bars; i++)
		{
				scanf("%d",&height[i]);
		}

		for(j=0; j<bars; j++)
		{
			for(i=0; i<height[j]; i++)
			{
					printf("- ");
			}
			printf("\n");
		}
}
