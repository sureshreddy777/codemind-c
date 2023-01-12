#include<stdio.h>
int main()
{
    int l,w,b,c,a,p;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    a=((l+2*w)*(b+2*w)-(l*b));
    p=a*c;
    printf("%d",p);
}