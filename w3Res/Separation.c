#include<stdio.h>
#include<string.h>
int main()
{
		int i;
		char input[25];
		fgets(input, 25, stdin);
		for(i=0; i<strlen(input); i++)
		{
				printf("%c",input[i]);
				if(input[i] == ' ')
				{
						printf("\n");
				}
		}
}
