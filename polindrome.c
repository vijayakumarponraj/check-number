
#include <stdio.h>
int main()
{
    int n, rev = 0, r, oi;

     scanf("%d", &n);

    oi = n;
    while( n!=0 )
    {
        r = n%10;
        rev = rev*10 + r;
        n /= 10;
    }
    if (oi == rev)
        printf("%d Yes");
    else
        printf("%d No");
    
    return 0;
}
