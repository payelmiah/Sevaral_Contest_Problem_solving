#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int i;
    double r1,r2,r3,r4;
    cin>>i;
    while(i--)
    {
        cin>>r1>>r2;
        if(r1<=0 && r2<=0)
        {
            cout<<"Impossible"<<endl;
            break;
        }
        r3=r1+r2;
        r4=(2*acos(0)*r3*r3-(2*acos(0)*r2*r2+2*acos(0)*r1*r1));
        cout<<showpoint<<fixed<<setprecision(4)<<r4<<endl;
    }
    return 0;
}
