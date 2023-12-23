#include<stdio.h>
int main()
{
    int n,i,power;
    printf("Enter N: ");
    scanf("%d",&n);//2
    printf("Enter N's exponent: ");
    scanf("%d",&power);//3

    int sum=0;

    for(i=1; i<=power; i++){
        sum = n * n;
    }
    printf("%d ",sum);
}
