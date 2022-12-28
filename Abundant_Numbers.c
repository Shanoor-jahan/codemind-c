#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,i,s=0;
    scanf("%d",&n);
    for(i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
        if(n/i==i)
        s=s+i;
        {
            s=s+i;
            s=s+(n/i);
        }
    }
}
s=s-n;
if(s>n)
{
    printf("True");
}
else
printf("False");
}