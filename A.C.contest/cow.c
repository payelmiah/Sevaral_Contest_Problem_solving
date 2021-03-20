#include<stdio.h>
int main()
{

    int x,y,t,x1,x2,y1,y2;
    scanf("%d",&t);
    while(t--){
            int i=1,p,j;
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        scanf("%d",&p);
        printf("Case %d:\n",i++);
        for(j=0;j<p;j++)
        {
            scanf("%d%d",&x,&y);

            if(x>=x1 && x<=x2 &&y>=y1&&y<=y2)
            {
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }

        }
    }
    return 0;
}
