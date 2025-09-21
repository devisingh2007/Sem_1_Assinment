
    #include<stdio.h>
int main()
{
     int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >=i; j--)
        {

            if (i == j ||i==1 ||j==n )
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
 