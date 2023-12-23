//0 1 1 2 3 5 8 13 21 34...
#include<stdio.h>
int main()
{
    int first[]={0,1}, n, sum, i;
    printf("Enter N: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        sum = first[0] + first[1];
        first[0] = first[1];
        first[1] = sum;

        printf("%d ",sum);
    }
}
