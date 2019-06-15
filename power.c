#include<stdio.h>
int main()
{
    int a,i,n,p=1,power;
    printf("enter any no and enter the power");
    scanf("%d%d",&n,&power);
    for (i = 0; i < power; i++)
        p = p*n;
    printf("%d",p);   
}