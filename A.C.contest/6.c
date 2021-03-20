#include<stdio.h>
int main()
{
    int a,b,c,t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a*a+b*b==c*c) printf("Case %d: yes\n",i);
        else if(b*b+c*c==a*a) printf("Case %d: yes\n",i);
        else if(c*c+a*a==b*b) printf("Case %d: yes\n",i);
        else printf("Case %d: no\n",i);
    }
    return 0;
}
