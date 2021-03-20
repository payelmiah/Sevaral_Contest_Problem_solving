#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        long long x,y,z;
        cin>>x>>y>>z;
        if(x==y && y==z)
        {
           cout<<"Case "<<i<<": "<<"Equilateral"<<endl;
        }
        else if(x==y || x==z || y==z)
        {
            cout<<"Case "<<i<<": "<<"Isosceles"<<endl;
        }
        else if(x<=0 || y<=0 || z<=0 )
        {
            cout<<"Case "<<i<<": "<<"Invalid"<<endl;
        }
        else if(x+y<=z || y+z<=x || z+x<=y)
        {
            cout<<"Case "<<i<<": "<<"Invalid"<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": "<<"Scalene"<<endl;
        }
    }
}
