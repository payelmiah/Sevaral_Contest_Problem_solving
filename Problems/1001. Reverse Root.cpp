#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int m,i=0,j;
   long double h,a[10000];
    while(cin>>m)
    {
        h=sqrt(m);
        a[i++]=h;
    }
    for(j=i-1;j>=0;j--)
    {
        cout<<fixed<<setprecision(4)<<a[j]<<endl;
    }
    return 0;
}
