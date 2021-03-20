
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,n,i,j,n1,m1,k=0;
    char ch;
    string s;
    cin>>t;
    while(t--)
    {
        int count=0;
        cin>>s>>n>>ch>>m;
        cin>>s>>n1>>ch>>m1;
        for(i=m;i<=m1;i++)
        {
            if((i%4==0&&i%100!=0) || (i%400==0))
            {
                 count++;
            }
        }
        cout<<"Case "<<++k<<": "<<count<<endl;

    }
}
