#include <stdlib.h>
#include <string.h>
int main()
{
    char ch[500];
    int i,n,s=1;
    gets(ch);
    n=strlen(ch);
    for(i=0;i<n;i++)
        {
    if(ch[i]== '.')
         {
            s++;
        }
    }
    printf("%d",s);
}
