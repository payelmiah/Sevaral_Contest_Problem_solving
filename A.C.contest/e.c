#include<stdio.h>
int main()
{
    int i,t;
    double as,ac,d,p;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf",&p);
        d=p*2;
        as=d*d;
        ac=2*acos(0.0)*p*p;
        printf("Case %d: %.2lf\n",i,as-ac);
    }

return 0;
}
