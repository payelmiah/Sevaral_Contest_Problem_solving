
#include<bits/stdc++.h>
#define PI acos(-1)
using namespace std;
int main()
{
    int n,k=0;
    double r1,s,h,b,AC1,AC2,AC3,a,c,r2,r3,areac1,A,B,C,angle,area;
    cin>>n;
    while(n--)
    {
        cin>>r1>>r2>>r3;
        a=r2+r3;
        b=r1+r2;
        c=r1+r3;
        A=acos((b*b+c*c-a*a)/(2.0*b*c))*180.0/PI;
        B=acos((a*a+c*c-b*b)/(2.0*a*c))*180.0/PI;
        C=acos((b*b+a*a-c*c)/(2.0*a*b))*180.0/PI;
        AC1=(PI*r1*r1)*(A/360.0);
        AC2=(PI*r3*r3)*(B/360.0);
        AC3=(PI*r2*r2)*(C/360.0);
        areac1=(AC1+AC2+AC3);
        s=((a+b+c)/2.0);
        h=sqrt(s*(s-a)*(s-b)*(s-c));
        area=h-areac1;
        cout<<"Case "<<++k<<": "<<fixed<<setprecision(10)<<area<<endl;
    }
    return 0;

}

