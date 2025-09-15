// Online C compiler to run C program online
#include <stdio.h>

int main() { int num;
    scanf("%d",&num);
    for(int i=1; i<=num; i++)
    {
        for(int j=num-i; j>=1; j--)
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