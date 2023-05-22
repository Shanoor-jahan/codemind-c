#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int r,s=0,p=1;
    while(a!=0)
    {
        r=a%10;
        s=s+r;
        a=a/10;
        p=p*r;
    }
    printf("%d",(p-s));
}