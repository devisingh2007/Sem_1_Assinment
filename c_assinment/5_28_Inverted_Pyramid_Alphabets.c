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
            printf("  ");
        }

        for (int k = 1; k <= (num * 2) + 1 - i * 2; k++)
        {
            printf("%C ", k + 64);
        }

        printf("\n");
    }

    return 0;
}