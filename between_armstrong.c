#include<stdio.h>
#include<math.h>
int main()
{
    int temp,n1,n2,flag=0,sum=0;
    printf("Enter two no.\n");
    scanf("%d%d",&n1,&n2);
    
    
    for (int z = n1+1; z < n2; z++)
    {
        int m = z;
        int f = z;
        while (m!=0)
        {
            flag++;
            m = m/10;
        }
        while (f!=0)
        {
            int rem = f%10;
            sum = sum + pow(rem,flag);
            f = f/10;                
        }
        if (sum==z)
        {
            printf("%d",z);
        }
    // RESETTING
        sum = 0;
        flag = 0;
    }    
}       