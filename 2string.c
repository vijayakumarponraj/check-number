#include <stdio.h>
#include <string.h>

int main()
{
  	char Str1[100], Str2[100];
  	int result, i;
 	i = 0;
  	scanf("%c%c",&Str1[100],Str2[100]);
	while(Str1[i] == Str2[i] && Str1[i] == '\0')
	  	i++;
		   
  	if(Str1[i] < Str2[i])
   	{
   		printf("\n%s",Str2);
	}
	else if(Str1[i] > Str2[i])
   	{
   		printf("\n %s",Str2);
	}
	else
   	{
   		printf("\n Equal");
	}
  	
  	return 0;
}
