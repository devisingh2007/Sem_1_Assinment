#include<stdio.h>
int main()
{ int num;
    printf("enter the number :");
    scanf("%d",&num);

    for(int i=1; i<=num; i++)
    {
        for( int j=1; j<=i; j++)
        {
            printf(" ");
        }
        for(int k=65; k<=num-i+65; k++)
        {
            printf("%c",k);
        }printf("\n");
    }
    
    return 0;
}