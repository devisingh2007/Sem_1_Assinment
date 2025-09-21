#include<stdio.h>
int main()
{
    int row,cols;
    printf("enter number of row:");
    scanf("%d",&row);
    printf("enter number of cols:");
    scanf("%d",&cols);

    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=cols; j++)
        {
            if(i==1||j==1||j==cols||i==row)
            printf("%d ",j);
            else
            printf("  ");
        }printf("\n");
    }
    return 0;
}