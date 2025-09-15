#include <stdio.h>

int main()

{
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 65; j <= i + 64; j++)
        {
            printf(" %c ", j);
        }
        printf("\n");
    }
}