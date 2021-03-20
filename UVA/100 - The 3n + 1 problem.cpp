#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,n,y,m,cnt,j,mx,temp;
    while(cin>>n>>y)
    {
        cout<<n<<" "<<y<<" ";
        if(n>y)
        {
            temp=n;
            n=y;
            y=temp;
        }
        j=0,mx=0;
        for(i=n; i<=y; i++)
        {
            m=i,cnt=1;
            while(m>1)
            {
                if(m%2!=0)
                {
                    m=(m*3)+1;
                }
                else
                {
                    m/=2;
                }
                cnt++;
            }
            if(cnt>=mx)
            {
                mx=cnt;
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}
