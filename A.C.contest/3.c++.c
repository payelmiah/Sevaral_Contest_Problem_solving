#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        int sum=0,a,j,b;
        cin>>a;
        for(j=1;j<=a;j++)
        {
            cin>>b;
            if(b>=0)
            {
                sum+=b;
            }

        }
        cout<<"case"<<i<<":"<<sum<<'\n';
    }
    return 0;
}

