#include <stdio.h>

int main()
{
    int i,n,a[100],ans;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        ans=a[0];
    }
    for(i=1;i<n;i++)
    if(ans<a[i])
    {
        ans=a[i];
    }
    printf("%d ",ans);
    
}
