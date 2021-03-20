#include <bits/stdc++.h>
using namespace std;
long double v[1000005];
int main()
{
    long long int  t,n,b,i,j,d;
    cin>>t;
    for(j=1;j<=1000000;j++)
    {
       v[j]=log10(j)+v[j-1];

    }
    for(i=1;i<=t;i++)
    {
        cin>>n>>b;

        d=floor(v[n]/log10(b))+1;

        printf("Case %lld: %lld\n",i,d);

    }
    return 0;
}
