
#include <stdio.h>
int main()
{
   int min,hr,h1,h2,m1,m2;
   scanf("%d %d",&h1,&m1);
   scanf("%d %d",&h2,&m2);
   h1=h1-h2;
   m1=m1-m2;
  hr=abs(h1);
  min=abs(m1);
  printf("%d %d",hr,min);
  }
