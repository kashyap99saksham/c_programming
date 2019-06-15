#include<stdio.h>
int main()
{
    int flag, n;
    printf("enter the number");
    scanf("%d",&n);
    for (int i = 2; i <=n/2; i++)
    {
        if(n%i==0)
            flag = 1;
        else
            flag=0;          
    }
    if (flag==1)
        printf("nott");
    else
        printf("yess"); 
    
}