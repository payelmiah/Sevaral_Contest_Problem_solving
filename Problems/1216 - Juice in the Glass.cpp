#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k=0;
    double v,r1,r2,r3,p,h;
    cin>>n;
    while(n--)
    {
        cin>>r1>>r2>>h>>p;
        r3=(r2+(r1-r2)*p/h);
        v=(1/3.0*(2*acos(0.0)*(r2*r2+r3*r3+r2*r3)*p));
        cout<<"Case "<<++k<<": "<<fixed<<setprecision(9)<<v<<endl;
    }
    return 0;
}
