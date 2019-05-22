#include<stdio.h>
void main()
{
int s,e,temp,i,a,b;
scanf("%d %d",&s,&e);
for(i=s+1;i<e;i++)
{
	temp=i;
	b=0;
	while(temp!=0)
	{
		a=temp%10;
		b=b+(a*a*a);
		temp=temp/10;
	}
	if(i==b)
	{
		printf("%d ", i);
	}
}
}
