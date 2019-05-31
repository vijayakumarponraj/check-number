#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[100];
    int i,n=0,b;
    gets(a);
    while(a[i]!='\0')
    {
        n=n+1;
        i++;
    }
    for(i=0;i<n;i++)
    {   
        if(a[i]!='0'&&a[i]!='1')
        {
            printf("no");
            return 0;
        }
        else
        {
            b=b+1;
        }
    }
    if(b==0)
    {
        printf("yes");
    }
    else
    {
        printf("yes");
    }
    return 0;
}
