#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char s[21];
    cin>>n>>s;
    int l=strlen(s),sum=n;
    for(int i=n-l;i>=1;i=i-l)
    {
        sum*=i;
    }
    cout<<sum<<endl;
}
