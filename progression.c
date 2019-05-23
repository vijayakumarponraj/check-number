#include <stdio.h>

int main()
{
    int a,b,c,sum;
    scanf("%d%d%d",&c,&a,&b);
    sum=(c*(2*a+(c-1)*b))/2;
    printf("%d ",sum);
}
