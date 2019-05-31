#include <stdio.h>
#include<string.h>
int main()
{
    int n,i,c=0,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
    
        c=c+i;
    }
    printf("sum=%d\n",c);
    a=c/n;
    printf("avg=%d\n",a);
    


    return 0;
}
