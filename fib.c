#include<stdio.h>
int main()
{
    int a=0,b=1,c,n;
    printf("Enter the number\n ");
    scanf("%d",&n);
    // printf("%d,%d",a,b);
    for (int i = 1; i <= n; i++)
    {
        printf("%d\t",a);
        c = a+b;
        a = b;
        b = c;
    }
    
    
    
    
}