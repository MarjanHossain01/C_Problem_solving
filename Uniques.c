#include<stdio.h>
int main()
{
    int i,n,target,count=0,j,found;
    printf("Enter N: ");
    scanf("%d",&n);
    int array[n];

    for(i=0; i<n; i++)
    {
        printf("Element %d: ",i);
        scanf("%d",&array[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(array[i]!=array[j]){
                count++;
                break;
            }
        }
    }

    if(count==0){
        printf("No Unique found");
    }
    else{
        printf("Unique found");
    }

}
