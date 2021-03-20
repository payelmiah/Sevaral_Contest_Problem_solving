#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,t,x1,x2,y1,y2,p,i=1;
    cin>>t;
    while(t--)
    {
        cin>>x1>>y1>>x2>>y2;
        cin>>p;
        cout<<"Case "<<i++<<": "<<endl;
        for(int j=1; j<=p; j++)
        {
            cin>>x>>y;

            if(x>=x1 && x<=x2 &&y>=y1&&y<=y2)
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
