#include<stdio.h>
int main()
{
    int n='E';
    for (int i = 'A'; i <= n; i++)
    {
        for (int j = 'A'; j <= i; j++)
        {
            printf("%c\t",i);
        }
        printf("\n");
    }
    
}