#include <stdio.h>
int main()
{
    int n = 10;
   int a;
    if (n % 2 == 1)
    {
        a = (n * n / 2) + n / 2 + 1;
    }
    else
    {
         a = (n * n / 2) + n / 2;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", a);
            a--;
        }
        printf("\n");
    }
    return 0;
}