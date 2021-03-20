#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int t,k=0,pos=0,num=0,b,i;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s>>b;
        if(b<0)
        {
            b=b*(-1);
        }
        if(s[0]=='-')
        {
            pos=1;
        }
        for(i=pos;s[i]!='\0';i++)
        {
            num=num*10+(s[i]-48);
            num=num%b;
        }
        if(num==0)
        {
            printf("Case %d: divisible\n",++k);
        }
        else{
            printf("Case %d: not divisible\n",++k);
        }
        pos=0;
        num=0;
    }
}
