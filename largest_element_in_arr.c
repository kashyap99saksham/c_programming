#include<stdio.h>
int largest(int );
int main()
{
    int n;
    printf("How many elements you have\n");
    scanf("%d",&n);
    int l = largest(n);
    printf("Largest no. is %d",l);  
}
int largest(int n)  
{
    int arr[100];
    for (int i = 1; i <= n; i++)
    {
        printf("Enter %d no. ",i);  
        scanf("%d",&arr[i]);
    }
    for(int j=2;j<=n;j++)
    {
        if(arr[1]<arr[j])
        {   
            arr[1] = arr[j];
        }
    }
    return(arr[1]);  
}