#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter N: ");
    scanf("%d",&n);
    printf("Factors for %d are: ",n);

    for(i=1; i<=n; i++){

        if(n%i==0){
            printf("%d ",i);
        }
    }
}
