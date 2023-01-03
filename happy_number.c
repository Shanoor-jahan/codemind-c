#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int ss(int n)
{
    if(n==0)
    return 0;
    return((n%10)*(n%10)+ss(n/10));
}
int h(int n)
{
    if(n==1)
    return 1;
    if(n==4)
    return 0;
    return h(ss(n));
}
int main()
{
    int n;
    scanf("%d",&n);
    if(h(n)==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}