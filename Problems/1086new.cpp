#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long int i,a[15001],j,f,m,k,l;
    a[0]=2;
    a[1]=3;
    for(i=5,l=2;l<=15000; i++)
    {
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                f=1;
                break;
            }
            else
            {
                f=0;
            }
        }
        if(f==0)
        {
            //cout<<i<<endl;
            a[l++]=i;
        }
    }
    cin>>n;
    while(n--)
    {
        cin>>m;
        cout<<a[--m]<<endl;
    }
    return 0;
}
