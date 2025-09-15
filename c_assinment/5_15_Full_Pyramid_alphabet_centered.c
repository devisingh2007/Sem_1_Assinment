// Online C compiler to run C program online
#include <stdio.h>

int main() {
    for(int i=1; i<=5; i++)
    {
        for(int j=5-i; j>=1; j--)
        {
            printf(" ",j);
        } 
        for(int k=65 ; k<=(2*(i)-1)+64; k++ )
        { 
            printf("%c",k);
        }
        
        
        printf("\n");
    }

    return 0;
}