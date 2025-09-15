#include<stdio.h>
int main()
{
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf(" ",j);
        }
        for(int k=5; k>=i; k--)
        {
            printf("*",k );

        }printf("\n");
    }



    return 0;
}