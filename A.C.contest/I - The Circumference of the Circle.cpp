#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x1,x2,x3,y1,y2,y3,r,c,q,p=0;
    while(1)
    {
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        p=pow((x1-x3),2)+pow((y1-y3),2);
        q=sqrt(p);
        r=q/2.0;
        c=2*(2*acos(0.0))*r;
        cout<<showpoint<<fixed<<setprecision(2)<<c<<endl;
    }
    return 0;
}
