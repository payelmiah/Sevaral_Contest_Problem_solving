#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,k=0,i,j;
    string s;
    cin>>t;
    while(t--)
    {
        int sum=0;
        cin>>m;
        cout<<"Case "<<++k<<":"<<endl;
        for(i=0;i<m;i++)
        {
            cin>>s;
            if(s=="report")
            {
                cout<<sum<<endl;
                continue;
            }
            cin>>n;
            if(s=="donate")
            {
                sum+=n;
            }
        }
    }
}
