#include<stdio.h>
int dec2bin(int);
int main()
{
    int d,count;
    printf("Enter any decimal no.\n");
    scanf("%d",&d);
    int b = dec2bin(d);
    printf("%d",b);
}
int dec2bin(int d)
{
    int i=1,answer = 0,rem;
    while(d!=0)
    {
        rem = d%2;
        d = d/2;
        answer += rem*i;
        i*=10;
    }
    return answer;
}

