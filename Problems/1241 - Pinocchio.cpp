#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,k=0,a[11],countt=0;
    cin>>n;
    while(n--)
    {
        cin>>m;
        for(i=0;i<m;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<m-1;i++)
        {
            if(a[i]<a[i+1])
            {
                countt++;
            }
        }
        cout<<"Case "<<++k<<": "<<countt<<endl;
        countt=0;
    }
    return 0;
}
