#include<stdio.h>
int main()
{ int num;
    scanf("%d",&num);
    for(int i=num; i>=1; i--)
    {
        for(int j=65; j<65+i; j++)
        {
            printf(" %c ",j);
        }printf("\n");
    }
}