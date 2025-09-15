#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ", j);
        }
        for (int k = 5; k >= i; k--)
        {
            printf("*", k);
        }
        printf("\n");
    }

    return 0;
}