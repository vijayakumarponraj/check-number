#include<stdio.h>
void main()
{
int s,e,i;
scanf("%d %d",&s,&e);
for(i=s+1;i<e;i++)
{
    if(i%2!=0)
{
    printf("%d ",i);
}
}
}
