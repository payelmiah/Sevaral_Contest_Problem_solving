#include<stdio.h>
int main()
{
  int h,m,t,l;
  scanf("%d%d",&h,&m);
  if(h<13)
  {
      printf("%d:%d AM\n",h,m);
  }
  else
  {
      printf("%d:%d PM\n",h-12,m);
  }
  return 0;
}
