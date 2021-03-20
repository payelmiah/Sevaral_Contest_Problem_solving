#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,w,e,r,t,u,i,o,k=0,area,A,B;
    float x,y,a,b;
    cin>>n;
    while(n--)
    {
        cin>>q>>w>>e>>r>>t>>y;
        area=q*(r-y)+e*(y-w)+t*(w-r);
        A=(q-e)*(q-e)+(w-r)*(w-r);
        B=(e-t)*(e-t)+(r-y)*(r-y);
        x=(q+t)/2.0;
        y=(w+y)/2.0;
        //cout<<x<<" "<<y<<endl;
        i=2*x-e;
        o=2*y-r;
        cout<<"Case "<<++k<<": "<<i<<" "<<o<<" "<<abs(area)<<endl;
    }
}
