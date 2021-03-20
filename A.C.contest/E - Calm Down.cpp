#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    double R,r,q,p,x,n;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>R>>n;
        q=(360/(2*n));
        q=(q*2*acos(0.0)/180);
        p=(R*sin(q));
        x=(1+sin(q));
        r=p/x;
        cout<<"Case "<<i<<": "<<showpoint<<fixed<<setprecision(10)<<r<<endl;
    }
    return 0;
}
