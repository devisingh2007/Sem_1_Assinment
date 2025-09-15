#include <stdio.h>
int main()
{
    int k = 1;
    int num;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }

    return 0;
}