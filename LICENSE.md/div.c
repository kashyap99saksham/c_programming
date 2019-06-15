#include<stdio.h>
void main()
{
    int a,b,q,r;
    printf("enter the divident");
    scanf("%d",&a);
    printf("enter the divisor");
    scanf("%d",&b);
    q=a/b;
    r=a%b;
    printf("%d\t%d",q,r);
}