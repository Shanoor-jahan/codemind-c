#include<stdio.h>
int main()
{
    int n,i,r=0,d=0,p=1;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        d=d+r;
        p=p*r;
        n=n/10;
    }
    printf("%d",p-d);
}