#include<stdio.h>
int main()
{
    int a,b,c,d,i,j;
    scanf("%d",&d);
    for(i=1;i<=d;i++)
    {
        int sum=0;
        scanf("%d",&c);
        while(c--)
        {
            scanf("%d",&a);
            if(a>=0){
            sum+=a;
            }
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
