#include<stdio.h>
void main()
{
int a,b,temp;
scanf("%d %d",&a,&b);
for(int i=a+1;i<b;i++)
{
    if(i%2==0)
    {
      printf("%d ",i);  
    }

}
}
