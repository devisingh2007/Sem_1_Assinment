#include <stdio.h>
int main()
{
    int num;
    printf("enter the number :");
    scanf("%d", &num);
    
    for (int i = 1; i <= num - 1; i++)
    {
        for (int j = num; j >= i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= (i * 2) - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i <= num; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            printf(" ");
        }

        for (int j = num * 2 + 1; j > i * 2; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}