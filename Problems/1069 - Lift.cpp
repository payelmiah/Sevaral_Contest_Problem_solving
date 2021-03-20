#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,k=0,time;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if(a>b)
        {
            b=a-b;
            time=4*b+a*4+11+8;
            cout<<"Case "<<++k<<": "<<time<<endl;
        }
        else
        {
            time=b*4+11+8;
            cout<<"Case "<<++k<<": "<<time<<endl;

        }
        time=0;
    }
    return 0;
}
