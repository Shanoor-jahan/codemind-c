#include<stdio.h>
int main()
{
    int n,i,t,k=0,c=0;
    scanf("%d" ,&n);
    int a[n];
    for(i=0;i<n;i++) 
    {
        scanf("%d" ,&a[i]); 
    }
        scanf("%d" ,&t); 
        for(i=0;i<n;i++)
        {
            if(a[i]<=t)
            {
                k++;
}
else
{ 
    c++;
    }
    } 
    printf("%d" ,k+2*c);
}