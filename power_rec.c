#include<stdio.h>
int power(int ,int );
int main()
{
    int n,c;
    printf("Enter any no.\n");
    scanf("%d",&n);
    printf("Enter coffecient.\n");
    scanf("%d",&c);
    int p = power(n,c);   
    printf("%d",p);
}
int power(int n,int c)
{
    int p = n;
    while (c!=1)
    {
        return p = p*power(n,c-1);
    }
    return p;
}