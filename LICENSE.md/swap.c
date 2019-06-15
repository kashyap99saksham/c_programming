// swap two numbers with using third variable
#include<stdio.h>
void main()
{

 int a,b,c;

printf("enter two numbers");
scanf("%d%d",&a,&b);
c=b;
b=a;
a=c;
printf("%d%d",a,b);
}