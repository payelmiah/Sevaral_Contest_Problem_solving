#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long int sum=0,a,b,i,c=0,count=0,k=0,j,r;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        for(i=1,j=0;; i++)
        {
            s[j++]=i+'0';
            c++;
            if(i>9)
            {
                while(i!=0)
                {
                    j++;

                    r=i/10;
                    s[++j]=r+'0';
                    i=i%10;
                }
                j++;
            }
            if(c==a)
            {
                i=0;
                c=0;
                a++;
            }
            if(a>b) break;
        }
        for(i=0;s[i]!=0;i++)
        {
            cout<<s[i];
        }

    }
    return 0;

}
