#include<stdio.h>
int main()
{
    int a=0,n,count=0;
    printf("enter any no");
    scanf("%d",&n);
    while(n!=0)
    {
        a = n%10;
        n = n/10;
        count++;

    }
    printf("%d",count);

    
}