#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int r=a%10;
    a=a/10;
    if(r%2==0 && a%2==0)
    printf("Even");
    else if(r%2!=0 && a%2!=0)
    printf("Odd");
    else
    printf("Mixed");
}