#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long int m,k=0,sum,count=0;
    cin>>n;
    while(n--)
    {
        cin>>m;
        while(m!=0)
        {
            sum=m%2;
            m=m/2;
            if(sum==1)
                count++;            {
            }
        }
        //printf("%d\n",count);
        if(count%2==0)
        {
            cout<<"Case "<<++k<<": even"<<endl;
        }
        else
        {
            cout<<"Case "<<++k<<": odd"<<endl;
        count=0;        }
    }
    return 0;
}
