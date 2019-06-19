#include<stdio.h>
int main()
{
    int n=9,k=0,i,j;
    for( i = 1; i <=n; i++,k=0)
    {
        for( j = 1; j <= n-i; j++)
        {
            printf(" ");
        }
        while(k!=2*i-1)
        {
            printf("*");
            k++;
        }
        printf("\n");
    }
}