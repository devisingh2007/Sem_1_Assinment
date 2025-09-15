#include <stdio.h>
int main()

{
    int num;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = i; j <= num; j++)
        {
            printf(" ", j);
        }
        for (int l = 65; l <= 64 + i; l++)
        {
            printf("%c", l);
        }

        printf("\n");
    }
}