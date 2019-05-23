#include<stdio.h>
int main()
{
int n,a[200],i,j,tem;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);


}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            tem=a[i];
            a[i]=a[j];
            a[j]=tem;
        }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    }

