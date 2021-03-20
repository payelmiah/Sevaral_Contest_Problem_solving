#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    double p,q,r,area;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>r;
        p=pow((2*r),2);
        q=(2*acos(0.0)*r*r);
        area=p-q;
        cout<<"Case "<<i<<": "<<showpoint<<fixed<<setprecision(2)<<area<<endl;
    }
    return 0;

}
