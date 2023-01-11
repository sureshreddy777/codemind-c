#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1000];
    fgets(ch,1000,stdin);
    printf("%s",ch);
}