#include <stdio.h>
int main()

{
    for (int i = 1; i<=5; i++)
    {
        for(int j=i; j<=5; j++)
        {
            printf(" ",j);
        }
        for(int l=65; l<=64+i; l++)
        {
            printf("%c",l);
        }
        

            printf("\n");
    }
}