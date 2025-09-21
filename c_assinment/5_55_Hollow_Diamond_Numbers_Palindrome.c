#include<stdio.h>
int main()
{int n=4;
    for(int i=1; i<=n; i++ )
    {
        for(int j=n; j>=i+1; j--)
        {
            printf("  ");
        }
        for(int k=1; k<=i; k++ )
        {
            printf("%2d",k);
        }
        if(i>1)
        {
            for(int l=i-1; l>=1; l--)
            {
                 printf("%2d",l);
            }
        }
    printf("\n");
}
for(int i=1; i<=n-1; i++)
{
    for(int j=1; j<=i; j++)
    {
         printf("  ");
    }
    for(int k=1; k<=n-i; k++)
    {
         printf("%2d",k);
    }
    for(int m=n-1-i; m>=1; m--)
    {
            printf("%2d",m);

    }
    printf("\n");
}







    return 0;
}