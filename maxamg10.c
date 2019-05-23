#include<stdio.h>
void main()
{
int a[10],i,ans=0;
for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);
}
ans=a[0];
  for(i=0;i<10;i++)
  {
      if(ans<a[i])
      {
          ans=a[i];
      }
  }
  printf("%d",ans);
}
