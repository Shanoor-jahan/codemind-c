#include<bits/stdc++.h>
using namespace std;

long long digitsCount(long long n)
{
    int len = 0;
    while(n>0)
    {
        len++;
        n/=10;
    }
    return len;
}

long long absoluteFirstLast(long long n,int x)
{
    int i=0,mod=1;
    while(i<x)
    {
        mod*=10;
        i++;
    }
    int last = n % mod;
    
    long long len = digitsCount(n);
    
    while(len !=x)
    {
        n/=10;
        len--;
    }
     int first = n;
     
     return abs(first-last);
}
int main()
{
    long long n,x;
    scanf("%lld%lld",&n,&x);
    cout<<absoluteFirstLast(n,x);
    return 0;
    
}