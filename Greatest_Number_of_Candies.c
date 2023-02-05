#include<stdio.h>
int main()
{
    int n,a,i,max=0,arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
         scanf("%d",&arr[i]);
         if(arr[i]>max)
         max=arr[i];
    }
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        if(arr[i]+a>=max)
        {
            printf("True ");
        }
        else
            printf("False ");
    }
}
