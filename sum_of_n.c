#include <stdio.h>
int main()
{
    int i,n,total=0;
    printf("enter number");
    scanf("%d",&n);
    // for (i=1;i<=n;i++)
    // {
    //     total = total+i;
    
    // }
    i=1;
    while (i<=n)
    {
        total = total+i;
        i++;
    }
    
    printf("%d",total);

}