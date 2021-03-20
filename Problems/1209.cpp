#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,t,k,c=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        a[0]=1;
        a[1]=1;
        a[2]=0;

        for(i=3,k=4;i<=n;i++)
        {
            c++;
            if(i==3)
            {
                a[i]=1;
            }
           else if(c==k)
            {
                a[i]=1;
                c=1;
                k++;
            }
            else
            {
                a[i]=0;
            }
        }
        cout<<a[n-1]<<endl;
        c=0;
    }
    return 0;
}
