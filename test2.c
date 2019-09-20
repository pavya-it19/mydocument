#include<stdio.h>
void main()
{
int a,b,c;
int  ch;
printf("enter the operand1");
scanf("%d",&a);
printf("enter operator 1.+.2.-,3.*,4././n");
scanf("%d",&ch);
printf("enter the opperand2");
scanf("%d",&b);
switch(ch)
{
case 1:
c=a+b;
printf("%d",c);
break;
case 2:
c=a-b;
printf("%d",c);
break;
case 3:
c=a*b;
printf("%d",c);
break;
case 4:
c=a/b;
printf("%d",c);
break;
default:
printf("please enter the correct one");
}
}
