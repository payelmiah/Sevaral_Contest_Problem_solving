#include<stdio.h>
#include<string.h>
int main()
{
    int t,j=0,l,i,f=0;
     char s[100],s1[100];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s);
        int l=strlen(s);
        for(i=0;i<l;i++)
        {
            s1[i]=s[i];
        }
       for(i=0,j=l-1;i<l;i++,j--)
       {
           swap(s[i],s[j]);
       }
        for(i=0;i<l;i++)
        {
            if(s1[i]!=s[i])
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            printf("Case %d: Yes\n",++j);
        }
        else
        {
            printf("Case %d: No\n",++j);
        }
        f=0;

    }
    return 0;
}
