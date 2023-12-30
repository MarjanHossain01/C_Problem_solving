#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,sum=0,n;
    char dong[10];
    printf("Enter word: ");
    scanf("%s", dong);
    for(i=0; dong[i] != '\0'; i++)
    {
        for(j='0'; j<='9'; j++)
        {
            if(dong[i] == j)
            {
                n = atoi(&dong[i]);
                sum = sum + n;
            }
        }
    }
    printf("Sum: %d",sum);

}
