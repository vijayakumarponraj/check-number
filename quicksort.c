#include<stdio.h>
void main()
{
int s,a[200],i,k,tem;
scanf("%d",&s);
for(i=0;i<s;i++)
{
scanf("%d",&a[i]);


}
for(i=0;i<s;i++)
{
    for(k=i+1;k<s;k++)
    {
        if(a[i]>a[k])
        {
            tem=a[i];
            a[i]=a[k];
            a[k]=tem;
        }
        }
    }
    for(i=0;i<s;i++)
    {
        printf("%d ",a[i]);
    }
    }
