#include<stdio.h>
void findwinner(int m,int n)
{
    if(m%2==0 || n%2==0)
    {
        printf("Player 1");
    }
    else
    printf("Player 2");
}
 
 int main()
 {
     int m,n;
     scanf("%d%d",&m,&n);
     findwinner(m,n);
     return 0;
 }