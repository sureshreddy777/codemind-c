#include<stdio.h>
int main()
{
    int x,y,a,b,sum=0,i;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    for(i=a;i<=b;i++)
    {
        if(i%x==0 && i%y!=0)
        {
            sum=sum+i;
        }
    }
    printf("%u",sum);
}