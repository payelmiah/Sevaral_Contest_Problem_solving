#include<stdio.h>
int main()
{
    int a,b,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a>10)
        {
            printf("%d %d\n",a-10,a-(a-10));
        }
        else{
            printf("0 %d\n",a);
        }
    }
    return 0;
}
