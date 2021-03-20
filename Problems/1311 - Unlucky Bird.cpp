#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k=0;
    double v1,t3,v2,v3,a1,a2,s1,s2,t1,t2,d,b;
    cin>>n;
    while(n--)
    {
        cin>>v1>>v2>>v3>>a1>>a2;
        t1=v1/a1;
        t2=v2/a2;
        s1=(v1*v1)/(2.0*a1);
        s2=(v2*v2)/(2.0*a2);
        d=s2+s1;
        t3=max(t1,t2);
        b=v3*t3;
        cout<<"Case "<<++k<<": "<<fixed<<setprecision(8)<<d<<" "<<setprecision(1)<<b<<endl;
    }
    return 0;

}
