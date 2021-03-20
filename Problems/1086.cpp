#include<bits/stdc++.h>
using namespace std;
int n,f=0,countt=0,j,i,m=0;
int Cryptography(int n)
{
    for(i=2;; i++)
    {
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {

                f=1;
                break;
            }
            else
                f=0;

        }
        if(f==0)
        {
            countt++;

        }
        if(countt==n)
        {
            countt=0;
            return i;
        }


    }
}

int main()
{
    int t,y;
    cin>>y;
    while(y--)
    {
    cin>>t;
    m=Cryptography(t);
    cout<<m<<endl;
    }

    return 0;
}

