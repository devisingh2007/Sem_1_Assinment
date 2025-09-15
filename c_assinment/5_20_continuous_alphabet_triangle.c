#include<stdio.h>
int main()
{ int k=65;
    int num;
    scanf("%d",&num);
    for(int i=1; i<=num; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%c ",k);
            k++;
        }printf("\n");
        
    }

    return 0;
}