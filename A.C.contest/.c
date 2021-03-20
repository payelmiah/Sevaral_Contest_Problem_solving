#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s);
        int l=strlen(s);
        if(s[l-1]=='o') printf("FILIPINO\n");
        else if(s[l-1]=='u')  printf("JAPANESE\n");
        else if(s[l-1]=='a')  printf("KOREAN\n");
    }
    return 0;
}
