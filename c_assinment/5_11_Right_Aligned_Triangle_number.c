#include <stdio.h>
int main()

{ int num;
    scanf("%d",&num);
    for (int i = 1; i<=num; i++)
    {
        for(int j=i; j<=num; j++)
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