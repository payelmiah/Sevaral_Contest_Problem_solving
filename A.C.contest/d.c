#include<stdio.h>
int main()
{
    int i,j,a[100],ar[100],t;
    for(i=0,j=1;i<100;i++,j++)
    {
        a[i]=j;
    }
    i=j=0;
    while(1){
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        scanf("%d",&ar[j]);
    }
    j=0;
    int count=0;
    /*for(j=0,i=0;j<t,i<t;j++,i++)
    {
        if(a[i]==ar[j])
        {
            count++;
        }
    }*/
    i=j=0;
    int count1=0;
    for(i=t-1,j=t-1;j>=0,i>=0;)
    {
        if(a[i]==ar[j])
        {
            count1++;

        }
        i--;
            j--;
    }
    printf("%d",count1);
    /*if(count==t || count1==t)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }*/
    }
}
