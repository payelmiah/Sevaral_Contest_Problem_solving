#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    double a[101],sum=0,arr[101],rad,r;
    cin>>n>>r;
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>arr[i];
    }
    sum=(2*acos(-1.0)*r)+sqrt((a[0]-a[n-1])*(a[0]-a[n-1])+(arr[0]-arr[n-1])*(arr[0]-arr[n-1]));;

    for(i=0;i<n-1;i++)
    {
        sum+=sqrt((a[i]-a[i+1])*(a[i]-a[i+1])+(arr[i]-arr[i+1])*(arr[i]-arr[i+1]));
    }
    cout<<setprecision(2)<<fixed<<sum+rad<<endl;
}
