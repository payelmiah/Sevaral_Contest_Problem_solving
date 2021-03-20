#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,p;
    cin>>m;
    while(m--)
    {
        p=0;
        cin>>n;
        if(n>10)
        {
            p=n-10;
        }
        cout<<p<<" "<<n-p<<endl;
    }
}
