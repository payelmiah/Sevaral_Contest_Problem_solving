#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,countt=0,counttt=0,sum=0;

    for(i=1;i<=2;i++)
    {
        cin>>n;

        while(n!=1)
        {
            if(n%2==0)
            {
                n=n/2;
                countt++;

            }
            else
            {
                n=3*n+1;
                counttt++;

            }


        }sum=countt+counttt;

    }
    printf("%d\n",sum);
    return 0;
}
