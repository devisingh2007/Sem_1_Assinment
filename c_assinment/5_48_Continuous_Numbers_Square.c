#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int a=1;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            printf(" %d ", a);
            a++;
        }
        printf("\n");
    }
}
