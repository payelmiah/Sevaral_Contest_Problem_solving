#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x1,y1,x2,y2,m,x,y,k=0;
    cin>>n;
    while(n--)
    {
        cin>>x1>>y1>>x2>>y2;
        cin>>m;
        cout<<"Case "<<++k<<":"<<endl;
        while(m--)
        {
            cin>>x>>y;
            if((x1<=x&&x2>=x)&&(y1<=y&&y<=y2))
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}
