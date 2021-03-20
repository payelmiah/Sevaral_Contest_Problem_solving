#include<stdio.h>
int main()
{
    int t,i,n,a[65536],f=0,mid,l,h,k=1;
    unsigned int j;
    scanf("%d",&t);
    for(i=0,j=1; i<65536; i++,j+=i)
    {
        a[i]=j;
    }
    while(t--)
    {
        scanf("%d",&n);
        l=0;
        h=65535;
        while(l<=h)
        {
            mid=(l+h)/2;
            if(a[mid]==n)
            {
                f=1;
                break;
            }
            else if(n>a[mid])
            {
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        }
        if(f==1)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
        f=0;
    }
    return 0;
}
