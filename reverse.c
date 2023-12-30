#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char str1[15] = "Bangladesh";
	char str2[15] = "India";
	char str_safe[15] = "";
	

	strcpy(str_safe, str1);
	strcpy(str1, str2);
	strcpy(str2, str_safe);
	
	printf("String 1: %s\n",str1);
	printf("String 2: %s",str2);
}
