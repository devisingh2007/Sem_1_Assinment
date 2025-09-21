#include <stdio.h>
int main()
{
    int num;
    printf("enter the number :");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }

        for (int k = (num * 2) ; k>i*2-1; k--)
        {
             printf("*");
        }

            printf("\n");
    }

    return 0;
}