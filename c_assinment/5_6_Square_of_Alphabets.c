#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 65; j <= num + 64; j++)
        {
            printf(" %c ", j);
        }
        printf("\n");
    }
}
