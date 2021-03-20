#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k=0,count=0;
    long long int a,b,sum=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        for(int i=1;i<=a;i++)
        {
            count++;
            sum-=i;
            if(count==b)
            {
                for(int j=1;j<=b;j++)
                {
                    sum+=i+1;
                    i++;

                }
                count=0;
            }
        }
        cout<<"Case "<<++k<<": "<<sum<<endl;;
        sum=0;
    }
}
