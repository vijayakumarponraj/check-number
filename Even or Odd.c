#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>=0)
    {
    if(a%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    }
    else
    {
        printf("invalid");
    }
    return 0;
}
