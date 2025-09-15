// Online C compiler to run C program online
#include <stdio.h>

int main() {
    for(int i=1; i<=5; i++)
    {
        for(int j=5-i; j>=1; j--)
        {
            printf(" ",j);
        } 
        for(int k=1 ; k<=2*i-1; k++ )
        {
            printf("*",k);
        }
       
        
        printf("\n");
    }

    return 0;
}