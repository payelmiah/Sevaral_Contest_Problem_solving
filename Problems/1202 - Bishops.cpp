#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r1,c1,r2,c2,k=0,a,b;
    cin>>n;
    while(n--)
    {
        cin>>r1>>c1>>r2>>c2;
        a=abs(r1-r2);
        b=abs(c1-c2);
        if(a==b) cout<<"Case "<<++k<<": 1"<<endl;
        else if((a-b)%2==0) cout<<"Case "<<++k<<": 2"<<endl;
        else cout<<"Case "<<++k<<": impossible"<<endl;
    }
    return 0;
}
