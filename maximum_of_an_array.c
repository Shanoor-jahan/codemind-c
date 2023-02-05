#include<stdio.h>
int main()
{
    int a[100],max,n,i,l=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    max = a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            l=i+1;
        }
    }
    printf("%d",max);
}