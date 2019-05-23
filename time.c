#include<stdio.h>
main()
{
int total,min,hr;
scanf("%d",&total);
min=total%60;
hr=total/60;
printf("%d %d",hr,min);
}
