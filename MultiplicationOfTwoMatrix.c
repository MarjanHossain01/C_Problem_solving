#include<stdio.h>
int main()
{
    int r1,c1,r2,c2,i,j,k;

    correction: 
    printf("Enter row and column for first Matrix: \n");
    scanf("%d %d",&r1,&c1);
    printf("Enter row and column for second Matrix: \n");
    scanf("%d %d",&r2,&c2);

    if(r2 != c1)
    {
        goto correction;
    }

    int mat1[r1][c1], mat2[r2][c2],result[r1][c1];

    printf("\nFirst Matrix:\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("Element [%d][%d]: ",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("\nSecond Matrix:\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("Element [%d][%d]: ",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }

    for(i=0; i<r1; i++){
	for(j=0; j<c1; j++){
	    printf("%d ",mat1[i][j]);
	    	printf("\n");
	}
    }
}
