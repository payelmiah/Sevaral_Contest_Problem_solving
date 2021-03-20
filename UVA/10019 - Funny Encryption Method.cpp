#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,b,h;
    cin>>t;
    while(t--)
    {
        cin>>m;
        b=m;
        h=m;
        int c=0,b1=0,b2=0,sum=0,r,i=0,a=0,arr=0;
        while(b!=0)
        {
            a+=b%2;
            b=b/2;
        }
        int x=1;
        while(h!=0)
        {
            r=h%10;
            sum=sum+x*r;
            x*=16;
            h=h/10;
        }
        i=0;
        while(sum!=0)
        {
            arr+=sum%2;
            sum=sum/2;
        }
        cout<<a<<" "<<arr<<endl;

    }
}
