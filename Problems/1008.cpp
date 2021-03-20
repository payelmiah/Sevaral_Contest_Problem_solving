#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int m,i,j,k=0,a[5][5]={1,2,9,10,25,4,3,8,11,24,5,6,7,12,23,16,15,14,13,22,17,18,19,20,21};
    int n;
    cin>>n;
    while(n--)
    {
        cin>>m;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i][j]==m)
            {
                cout<<"Case "<<++k<<": "<<i+1<<" "<<j+1<<endl;
                break;
            }
        }
    }
    }
    return 0;
}
