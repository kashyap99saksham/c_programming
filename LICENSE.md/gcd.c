#include<stdio.h>
int main()
{
    int i,n1,n2,gcd;
    printf("enter two numbers");
    scanf("%d %d",&n1,&n2);
    for(i=1;i<=n1&&i<=n2;i++)
    {
        if(n1%i==0&&n2%i==0)
            gcd=i;
    }
    printf("%d",gcd);
}
// for finding LCM 
//lcm=(n1*n2)/gcd
 