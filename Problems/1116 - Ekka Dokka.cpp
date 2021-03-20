#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f;
    long long int m,i,o,e;
    cin>>n;
    for(int k=1;k<=n;k++)
    {
        cin>>m;
        if(m%2!=0)
        {
            cout<<"Case "<<k<<": "<<"Impossible"<<endl;
        }
        else{
            o=m/2;
            e=2;
            while(o%2==0)
            {
                o=o/2;
                e=e*2;
            }
            cout<<"Case "<<k<<": "<<o<<" "<<e<<endl;
        }
    }
    return 0;
}
