#include<stdio.h>
int main()
{int m,n;
    printf("Enter the number\n ");
    scanf("%d",&n);
    for (int i = 1; i <=10; i++)
    {
        m=n*i;
        printf("%d\t*\t%d\t=%d\n",n,i,m);
    }
    
}