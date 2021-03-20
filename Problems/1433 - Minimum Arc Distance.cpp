#include<bits/stdc++.h>
#define PI acos(-1)
using namespace std;
int main()
{
    int n,x1,y1,k=0,x2,y2,x3,y3;
    double circle,arc,dis,A,B,C,AB,OA,angle,h,s;
    cin>>n;
    while(n--)
    {
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        AB=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
        OA=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
        h=(OA*OA+OA*OA-AB*AB)/(2.0*OA*OA);
        angle=(acos(h)*180/PI);
        s=OA*angle*PI/180.0;
        cout<<"Case "<<++k<<": "<<fixed<<setprecision(8)<<s<<endl;
    }
    return 0;
}
