#include <stdio.h>


int main()
{
   
char str[50];
   
int i,ans=0;
   
gets(str);
   
for(i=0;str[i];i++)
   
if(str[i]==' ')
   
ans++;
   
printf("%d",ans);

}
