#include<stdio.h>
int main()
{
    int r,n,s=0,t;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        s=s*10+r;
    }
    if(t==s)
    printf("True");
    else
    printf("False");
}