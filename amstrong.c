
#include<stdio.h>
void main()
{
int n,count,a,b=0;
scanf("%d",&n);
count=n;
while(n>0)
{
	a=n%10;
	b=b+(a*a*a);
	n=n/10;
}
if(count==b)
{
	printf("yes");
}
else
{
	printf("no");
}
}
