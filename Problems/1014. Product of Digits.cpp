#include<bits/stdc++.h>
using namespace std;
int function(int r int i)
{
    string s;
    while()
}
int main()
{
    int i,k=0,a[10000],count=0;
    long long int sum=0,n;
    cin>>n;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            int r=n/i;
            cout<<r<<i<<endl;
            function(r,i);
            /*a[k++]=10*r+i;
            count++;*/
        }
    }
    for(i=0;i<count;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
   int min=a[0];
    for(i=0;i<count;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    cout<<min<<endl;
    return 0;
}
