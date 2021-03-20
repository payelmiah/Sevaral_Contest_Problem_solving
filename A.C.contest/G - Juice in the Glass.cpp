#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    double r1,r2,r3,h,p,v;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>r1>>r2>>h>>p;
        r3=(r2+(r1-r2)*(p/h));
        v=((1/3.0)*2*acos(0.0)*(r2*r2+r3*r3+r2*r3)*p);
        cout<<"Case "<<i<<": "<<showpoint<<fixed<<setprecision(9)<<v<<endl;
    }
    return 0;
}
