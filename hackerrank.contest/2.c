#include<stdio.h>
int sumarry(int sum)
{
    return sum;
}
int main()
{
    int n,l,i,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    l=sumarry(sum);
    printf("%d\n",l);
    return 0;
}
