#include <stdio.h>
int main()
{
    int a,b,s;
    scanf("%d%d",&a,&b);
    s=a+b;
    if(s%2==0)
    {
        printf("Even");
    }
    else
    {
    printf("Odd");
    }
    return 0;
}
