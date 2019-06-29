#include<stdio.h>
int main()
{
    int i;
    char str;
    printf("Enter any sentence\n");
    while(str!="\n")
        scanf("%c",&str);   

    printf("%c",str);
}