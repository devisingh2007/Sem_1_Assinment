#include<stdio.h>
int main()
{ int num=5;
    for(int i=1; i<=num; i++ )
    {
        for(int j=num; j>i; j--)
        {
            printf(" ");
        }
        for(int k=65; k<=64+i; k++)

        {
            printf("%c",k);
        }

        for(int l=i+63; l>64; l--)
        {
             printf("%c",l);
        }
        printf("\n");
    }
    for(int i=1; i<num; i++)
    { 
        for(int j=1; j<=i; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=num-i; k++)
        {
            printf("%c",k+64);
        }
        for(int l=63+num-i; l>=65; l-- )
        {
            printf("%c",l);
        }


         printf("\n");
    }

    return 0;
}