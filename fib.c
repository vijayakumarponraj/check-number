#include <stdio.h>
 int main()
{
    int a=1,b=1,num,i,c;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}
