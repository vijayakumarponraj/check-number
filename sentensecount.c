
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    char c[50];
    int n,k=0,i,ans;
    gets(c);
    n=strlen(c);
    for(i=0;i<n;i++)
    {
        if(c[i]== ' ')
        {
        k++;
        }
    }
ans=n-k;
printf("%d",ans);
    
}
