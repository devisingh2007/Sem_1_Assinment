#include <stdio.h>
int main()
{  int num;
    scanf("%d",&num);
    for (int i = 65; i < num+65; i++)
    {
        printf(" %c ", i);
    }
}