
#include<stdio.h>
void main()
{
int a,b,c,d;
printf("enter the values");
scanf("%d %d %d %d",&a,&b,&c,&d);
if((a<b)&&(a<c)&&(a<d))
{
printf("a");
}
else
if((b<c)&&(b<d))
{
printf("b");
}
else
if((c<a)&&(c<d))
{
printf("c");
}
else
if(d<a)
{
printf("d");
}
}
