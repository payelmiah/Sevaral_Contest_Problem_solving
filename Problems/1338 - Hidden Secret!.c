#include<stdio.h>
#include<string.h>
int count,i,j,k,l,n,y,m=0,t,c=0;
char s[101],sr[101],s2[101],s3[101];
int function(int count)
{
      int p=0,u=0;
    for( i=count; i<l; i++)
    {
        count++;
        if(s[i]==' ')
        {
            break;
        }
        s2[p++]=s[i];

    }
    for(t=0; t<k; t++)
    {
        if(sr[t]==' ')
        {

            if(!strcmp(s2,s3))
            {
                count=0;
                return 1;
            }
            u=0;
            continue;
        }
        s3[u++]=sr[t];
    }
    if(l<count)
    {
        count=0;
        return -1;
    }
    else function(0);

}
int main()
{

    //scanf("%d",&n);
    for(y=1;y<=4;y++)
    {
        gets(s);
        l=strlen(s);
        gets(sr);
        k=strlen(sr);
        j=function(0);
        if(j==-1)  printf("Case %d: Yes\n",y);
        else printf("Case %d: No\n",y);


    }
    return 0;
}
