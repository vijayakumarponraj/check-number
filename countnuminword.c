#include <stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    char a[50];
    int n,ans=0,i,b;
    gets(a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(isdigit (a[i]))
        {
        ans++;
        }
    }
printf("%d",ans);
    
}
