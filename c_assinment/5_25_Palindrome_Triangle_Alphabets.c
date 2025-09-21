#include<stdio.h>
int main()
{ int num;
    printf("enter the number :");
    scanf("%d", &num);

    for(int i=1; i<=num; i++)
    {
        for(int j=65; j<=i+64; j++)
        {
            printf("%c ",j);
        }
        for(int k=i-1; k>=1; k-- )
        {
            printf("%c ",k+64); 
        }




        printf("\n");
    }
    
    return 0;
}