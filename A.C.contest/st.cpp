#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s[101];
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>s;
        int l=strlen(s);
        int j=l-1;
            if(s[j]=='0') cout<<"FILIPINO"<<endl;
            else if(s[j]=='u') cout<<"JAPANESE"<<endl;
            else if(s[j]=='a') cout<<"KOREAN"<<endl;

    }

}
