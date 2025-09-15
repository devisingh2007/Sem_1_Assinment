#include <stdio.h>
int main()

{
    for (int i = 1; i<=5; i++)
    {
        for(int j=i; j<=5; j++)
        {
            printf(" ",j);
        }
        for(int l=1; l<=i; l++)
        {
            printf("%d",l);
        }
        

            printf("\n");
    }
}