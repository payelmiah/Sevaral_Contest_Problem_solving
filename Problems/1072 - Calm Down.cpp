
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,k=0;
    double R,s,x,y,u,h,e,m;
    cin>>n;
    while(n--)
    {
        cin>>R>>m;
        s=360/(2*m);
        y=((2*acos(0.0)*s)/180);
        h=(R*sin(y));
        e=(1+sin(y));
        x=h/e;
        cout<<"Case "<<++k<<": "<<showpoint<<fixed<<setprecision(10)<<x<<endl;
    }
    return 0;

}
