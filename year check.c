#include <stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    if(year%4==0 && year%100!=0 || y%400==0)
    {
        printf("Leap year");
    }
    else
    {
        printf("no");
    }
    return 0;
}
