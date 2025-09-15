#include<stdio.h>
int main()
{
    for(int i=5; i>=1; i--)
    {
        for(int j=65; j<=65+i; j++)
        {
            printf(" %c ",j);
        }printf("\n");
    }
}