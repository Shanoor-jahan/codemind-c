#include<stdio.h>
int main()
{
    int n,i,g;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    g=a[0];
    int j=1;
    while(j<n)
    {
        if(a[j]%g==0)
        {
            j++;
        }
        else
        {
            g=a[j]%g;
            i++;
        }
        
    }
    printf("%d",g);
}
