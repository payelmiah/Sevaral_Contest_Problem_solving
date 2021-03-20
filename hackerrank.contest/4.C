#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n],j;
    for(i=0,j=1;i<n;i++,j++)
    {

        scanf("%d",&a[i]);
        a[i]+=j;
    }
    int max=0;
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max>a[i])
        {
            max=a[i];

        }
    }
    printf("%d\n",max);
    return 0;
}
