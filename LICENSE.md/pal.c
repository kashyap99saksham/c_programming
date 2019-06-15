//palindrome number
#include<stdio.h>
int main()
{
    int a,n,rev=0;
    printf("enter the number");
    scanf("%d",&n);
    int z = n;
    while(n!=0)
    {
        a = n%10;
        rev  = rev*10+a;
        n=n/10;
    }
    if (rev==z)
        printf("it is a palindrome no.");

    
    

}
