#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k=0;
    double r,area,h;
    cin>>n;
    while(n--)
    {
        cin>>r;
        h=2*r;
        area=(h*h-(2*acos(0.0)*r*r));
        cout<<"Case "<<++k<<": "<<fixed<<setprecision(2)<<area<<endl;
        area=0;
    }
    return 0;
}
