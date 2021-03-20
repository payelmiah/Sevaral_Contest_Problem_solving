#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,s1,s2,s3,s4,b,c,d,n,m,r,i,j,k=0,sum[9],sum1[9],sum2[9],sum3[9];
    char ch;
    cin>>t;
    while(t--)
    {
        s1=s2=s3=s4=0;
        std::cin>>a>>ch>>b>>ch>>c>>ch>>d;
        for(i=0; i<8; i++)
        {
            sum[i]=a%2;
            a=a/2;
            sum1[i]=b%2;
            b=b/2;
            sum2[i]=c%2;
            c=c/2;
            sum3[i]=d%2;
            d=d/2;
        }
        for(i=7; i>=0; i--)
        {
            s1=s1*10+sum[i];
            s2=s2*10+sum1[i];
            s3=s3*10+sum2[i];
            s4=s4*10+sum3[i];

        }
        //cout<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<endl;
        cin>>a>>ch>>b>>ch>>c>>ch>>d;
        if(s1==a&&s2==b&&s3==c&&s4==d) cout<<"Case "<<++k<<": Yes"<<endl;
        else cout<<"Case "<<++k<<": No"<<endl;

    }
}
