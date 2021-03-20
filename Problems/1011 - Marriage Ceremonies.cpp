#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k=0,n,m;
    cin>>n;
    while(n--)
    {
        cin>>m;
        int a[m][m],sum=0;
        for(i=0; i<m; i++)
        {
            for(j=0; j<m; j++)
            {
                cin>>a[i][j];
            }
        }
        for(i=0,j=m-1;i<m;i++,j--)
        {
            sum+=a[i][j];
        }
        cout<<"Case "<<++k<<": "<<sum<<endl;

    }
}
