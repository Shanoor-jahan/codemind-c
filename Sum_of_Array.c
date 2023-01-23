#include<stdio.h>
int main()
{
    int a[100],size,i,sum=0;
    scanf("%d",&size);
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
    for(i=0;i<size;i++)
    sum=sum+a[i];
    printf("%d",sum);
}
    