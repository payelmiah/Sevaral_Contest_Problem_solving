#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int o1,o2,a1,a2,b1,b2,c1,c2,i,n;double s,x,y,z,angle;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>o1>>o2>>a1>>a2>>b1>>b2;
        x=sqrt((o1-a1)*(o1-a1)+(o2-a2)*(o2-a2));
        y=sqrt((o1-b1)*(o1-b1)+(o2-b2)*(o2-b2));
        z=sqrt((a1-b1)*(a1-b1)+(a2-b2)*(a2-b2));
        angle=acos((x*x+y*y-z*z)/(2.0*x*y));
        s=x*angle;
        cout<<"Case "<<i<<": "<<showpoint<<fixed<<setprecision(8)<<s<<endl;
    }
    return 0;

}
