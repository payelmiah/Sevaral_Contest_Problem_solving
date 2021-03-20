#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    double r1,temp,area1,area2,area3,area4,s1,area5,a,b,c;
    while(cin>>a>>b>>c){
    s1=((a+b+c)/2.0);
    area2=sqrt((s1*(s1-a)*(s1-b)*(s1-c)));
    area3=(2*acos(0.0)*((a+b-c)*(a+b-c)/4.0));
    r1=(a*b*c/4.0/area2);
    area1=(2*acos(0.0)*r1*r1);
    area4=(area1-area2);
    area5=(area2-area3);
    cout<<showpoint<<fixed<<setprecision(4)<<area4<<" "<<area5<<" "<<area3<<endl;
    }
    return 0;
}
