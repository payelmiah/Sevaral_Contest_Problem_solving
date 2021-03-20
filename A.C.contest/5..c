#include<stdio.h>
int main()
{
    double a,t,area,hi,love,shade;
    int i;
    scanf("%lf",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf",&a);
        hi=2*acos(0.0)*a*a;
        love=(2*a)*(2*a);
        shade=love-hi;
        printf("Case %d: %.2lf\n",i,shade);
    }
    return 0;
}
