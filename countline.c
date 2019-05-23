#include <stdio.h>
int main()
{
   
char s[50];
   
int i,ans=0;
   
gets(s);
   
for(i=0;s[i];i++)
   
if(s[i]=='.')
   
ans++;
   
printf("%d",ans);

}
