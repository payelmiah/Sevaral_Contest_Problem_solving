#include<stdio.h>
int main()
{
    int a[50],b,c,i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<t;i++)
    {
        if(a[i]+a[i+1]>a[i+2])
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
