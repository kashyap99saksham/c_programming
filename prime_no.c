#include<stdio.h>
int main()
{
    int p,q,i,j;
    printf("enter two numbers");
    scanf("%d%d",&p,&q);
    for (i=p+1;i<=q-1;i++)
    {
        for (j = 2; j < i; j++)
        {
            if(i%j==0)
                break;
        }
            if(i==j)
                printf("%d",i);
                 
        
        
    }
}