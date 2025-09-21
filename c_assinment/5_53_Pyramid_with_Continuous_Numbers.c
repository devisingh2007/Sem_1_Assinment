#include<stdio.h>
int main()
{
    int n=4,a=1; 
    for(int i=1; i<=n; i++)
    {
        for(int j=n ; j>=i+1; j--)
        {
             printf("   ");
        }
        for(int k=1; k<=i*2-1; k++)
        {
            printf("%2d ",a);
            a++;
        } printf("\n");
    }
    return 0;
}