#include<stdio.h>
float avg(int );
int main()
{
    int n;
    printf("How many no. you want to calculate their average\n");
    scanf("%d",&n);
    float a = avg(n);
    printf("average of these no. is %.2f",a);
}
float avg(int n)
{
    float sum=0,arr[100];
    for (int i = 1; i <= n; i++)
    {
        printf("Enter %d no. ",i);
        scanf("%f",&arr[i]);
    }
    for (int j = 1; j <= n; j++)
    {
        sum += arr[j];
    }
    sum = sum/n;  
    return sum;
}