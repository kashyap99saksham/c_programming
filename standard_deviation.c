#include<stdio.h>
#include<math.h>
int deviation(int,int arr[]);
int main()
{
    int n;
    printf("How many elements you have\n");
    scanf("%d",&n);
    int arr[100];
    for (int i = 1; i <= n; i++)
    {
        printf("Enter %d no. ",i);  
        scanf("%d",&arr[i]);
    }
    int a = deviation(n,arr);
    printf(" deviation  is %d",a);  
}
int deviation(int n,int arr[])  
{
    int mean = 0,der=0;
    for(int j=1;j<=n;j++)
    {
       mean = mean+arr[j];
    }
    mean = mean/n;
    for(int j=1;j<=n;j++)
    {
       arr[j] = arr[j]-mean;
    }
    for(int j=1;j<=n;j++)
    {
       der = der+pow(arr[j],2);
    }
    der = der/n;
    return(sqrt(der));  
}