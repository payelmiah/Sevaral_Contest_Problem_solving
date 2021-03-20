#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,t,c=0,l,k=1,x,b,d;
    scanf("%d",&l);
    while(l--)
    {
        scanf("%d",&t);
        int a[t];
        char s[t][21];
        for(i=0; i<t; i++)
        {
            scanf("%s",s[i]);
            scanf("%d%d%d",&x,&b,&d);
            a[i]=x*b*d;
        }
        int max,min,p=0,p1=0;
        max=min=a[0];
        for(i=1; i<t; i++)
        {
            if(max<a[i])
            {
                max=a[i];
                p=i;
                c=1;
            }
            if(min>a[i])
            {
                min=a[i];
                p1=i;
                c=1;
            }
        }
        if(c==1)
        {
            printf("Case %d: %s took chocolate from %s\n",k++,s[p],s[p1]);
        }
        else
        {
            printf("Case %d: no thief\n",k++);
        }
        c=0;
    }
    return 0;
}



