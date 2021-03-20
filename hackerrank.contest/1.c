#include<stdio.h>
int sovefirst(int a,int b)
{
    return a+b;
}
int main()
{
    int a,b,s;
    scanf("%d%d",&a,&b);
    s=sovefirst(a,b);
    printf("%d\n",s);
    return 0;
}
