#include <stdio.h>
int main()
{
    char n;
    scanf("%c",&n);
    if(isdigit(n))
    {
        printf("yes");
    }
    else
    {
        printf("No");
    }
 return 0;   
}
