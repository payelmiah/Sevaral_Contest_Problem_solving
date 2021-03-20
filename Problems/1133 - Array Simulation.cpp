#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,i,j,x,y,v,c,Y,k,l=0;
    char ch;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int a[n],b;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<m;i++)
        {
            cin>>ch;
            if(ch=='P')
            {
                cin>>x>>y;
                b=a[x];
                a[x]=a[y];
                a[y]=b;
            }
            if(ch=='S')
            {
                cin>>c;
                for(j=0;j<n;j++)
                {
                    a[j]=a[j]+c;
                }
            }
            if(ch=='R')
            {
                 v=sizeof(a)/sizeof(a[0]);
                reverse(a,a+v);
            }
            if(ch=='M')
            {
                cin>>Y;
               for(j=0;j<n;j++)
                {
                    a[j]=a[j]*Y;
                }
            }
            if(ch=='D')
            {
                cin>>k;
                for(j=0;j<n;j++)
                {
                    a[j]=a[j]*1.0/k;
                }

            }
        }
        cout<<"Case "<<++l<<":"<<endl;
        for(i=0;i<n-1;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<a[n-1]<<endl;
    }
    return 0;
}
