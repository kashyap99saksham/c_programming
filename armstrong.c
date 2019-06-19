#include<stdio.h>
#include<math.h>
int main()
{
    int temp,n,flag=0,sum=0;
    printf("Enter any no. you want\n");
    scanf("%d",&n);
    int m = n;
    int f = n;
    while (m!=0)
    {
        flag++;
        m = m/10;
    }
    while (n!=0)
    {
        int rem = n%10;
        sum += pow(rem,flag);
        n = n/10;                
    }
    if (sum==f)
    {
        printf("yeaahhh!!! ");
    }
    else
    {
        printf("OOPPS!!!!!");
    }
    
    // printf("%d",flag);
    
}       