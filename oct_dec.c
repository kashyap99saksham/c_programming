#include<stdio.h>
#include<math.h>
// int reverse(int);
int count(int);
int bin2dec(int,int);
int main()
{
    int n;
    printf("Enter binary no.\n");
    scanf("%d",&n);
    int c = count(n);    
    // int r = reverse(n);
    int dec = bin2dec(c,n);
    printf("Decimal value is -> %d",dec);
}
int count(int c)
{
    int k = 0;
    while(c!=0)
    {
        k++;
        c = c/10;
    }
    return k;
}
// int reverse(int r)
// {
//     int rev =0,rem ;
//     while(r!=0)
//     {
//         rem = r%10;
//         rev = rev*10+rem;
//         r = r/10;
//     }
//     return rev;
// }
int bin2dec(int c ,int b)
{
    int temp=0,answer=0;
    for(int i=0;i<c;i++)
    {
        temp = b%10;
        answer = answer + temp*pow(8,i);
        b = b/10;
    }
    return answer;
}