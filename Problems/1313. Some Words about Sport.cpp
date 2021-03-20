#include<bits/stdc++.h>
using  namespace std;
int  main()
{
    int  n,i,j,k,c=0,l,t=0;
    cin>>n;
    int a[101][101];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    for(j=0,k=0,l=1; l<n*2; l++)
    {
        c++;
        for(i=j; i>=t; i--,k++)
        {
            cout<<a[i][k]<<" ";
        }
        if(c>=n)
        {
            t++;
            k=t;
        }
        else
        {
            k=t;
            j++;
        }

    }
    return 0;
}


