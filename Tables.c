#include<stdio.h>
int main()
{
    int i,a,b,c;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i+=2)
    { 
        c=a*i;
        printf("%d x %d = %d
",a,i,c);
    }
}