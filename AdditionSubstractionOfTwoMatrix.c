#include<stdio.h>
int main()
{
    int i,j;
    int Rows, Cols;

    printf("Enter Rows and Columns: \n");
    scanf("%d %d",&Rows, &Cols);
    int a[Rows][Cols], b[Rows][Cols], sum[Rows][Cols];

    for(i=0; i<Rows; i++){
        for(j=0; j<Cols; j++){
            printf("Element [%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }


    for(i=0; i<Rows; i++){
        for(j=0; j<Cols; j++){
            printf("Element [%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<Rows; i++){
        for(j=0; j<Cols; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    for(i=0; i<Rows; i++){
        for(j=0; j<Cols; j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<Rows; i++){
        for(j=0; j<Cols; j++){
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}
