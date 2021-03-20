
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,k=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        a=a*a,b=b*b,c=c*c;
        if(a+b==c)
        {
            cout<<"Case "<<++k<<": "<<"yes"<<endl;
        }
        else if(a+c==b)
        {
            cout<<"Case "<<++k<<": "<<"yes"<<endl;
        }
        else if(b+c==a)
        {
            cout<<"Case "<<++k<<": "<<"yes"<<endl;
        }
        else
        {
            cout<<"Case "<<++k<<": "<<"no"<<endl;
        }

    }
    return 0;
}
