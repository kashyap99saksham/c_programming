#include<stdio.h>
#include<math.h>
int main()
{
    int oct,i,n;
    printf("Enter binary no.\n");
    scanf("%d",&n);
    int c = count(n);
    oct = bin_oct(c,n);
    printf("%d",oct);
}
int count(int b)
{
    int k=0;
    b/=10;
    k++
    return k;
}
int bin_oct(int c,int b)
{
    int val=0;
    while(b!=0)
    {
        for(i=1;i<=3;i++)
        {
            rem = b%10;
            val =  val+rem*i;       //0 1 0  1 0 1 0 1 0
            b/=10;
            i*=10;
        }
        int o = convert(val);
    }

int convert(int val)
{
    while(val!=0)
    {
        rem = val%10;
        o = o+pow(2,i)
        i++;
        val/=10;
    }
}
    {
        for(int j =   l ;j<=3 ; j++)
        {

        }
    }
}