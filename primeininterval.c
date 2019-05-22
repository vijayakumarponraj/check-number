#include<stdio.h>
int main() 
{
   int i,j,s,e,count;
   scanf("%d%d",&s,&e);
   for(i=s+1;i<=e;i++)
   {
       count=0;
       for(j=2;j<=i;j++)
       {
       if(i%j==0)
       {
           break;
       }
       }
       if(j==i)
       {
           printf("%d ",i);
       }
   }
}
