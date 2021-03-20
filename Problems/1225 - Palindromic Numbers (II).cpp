#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int t,j=0;
    string s,s1;
    cin>>t;
    while(t--)
    {
       cin>>s;
        std::string copy(s);
        std::reverse(s.begin(), s.end());

        if(!s.compare(copy))
        {
            cout<<"Palindrome"<<endl;
        }
        else
        {
            cout<<"Case "<<++j<<": Not Palindrome "<<endl;
        }
    }
    return 0;
}
