#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int r=0,s=0,cnt=0;
    while(num)
    {
        r=(r*10)+(num%10);
        num/=10;
    }
while(r)
{
    if(r%10==6 && cnt==0)
    {
        s=(s*10)+9;
        cnt++;
    }
    else
    {
        s=(s*10)+(r%10);
    }
    r/=10;
}
printf("%d",s);
}