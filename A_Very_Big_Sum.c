#include<stdio.h>
int main()
{
    long long int n,sum=0,i;
    scanf("%lld",&n);
    long long int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%lld",sum);
}