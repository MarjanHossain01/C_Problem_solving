//C program to break inputted money into smaller parts
#include<stdio.h>
int main()
{
		int money;
		printf("How much Money?\n");
		scanf("%d",&money);

		printf("%d notes of 100\n",money/100);
		money = money - (100*(money/100));

		printf("%d notes of 50\n",money/50);
		money = money - (50*(money/50));

		printf("%d notes of 20\n",money/20);
		money = money - (20*(money/20));

		printf("%d notes of 10\n",money/10);
		money = money - (10*(money/10));

		printf("%d notes of 5\n",money/5);
		money = money - (5*(money/5));

		printf("%d notes of 2\n",money/2);
		money = money - (2*(money/2));

		printf("%d notes of 1\n",money/1);
		money = money - (1*(money/1));

}









