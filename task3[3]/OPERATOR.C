#include<stdio.h>
int main()
{
int num1;
int num2;
char op;
printf("enter the first number:");
scanf("%d",&num1);
printf("enter the second number:");
scanf("%d",&num2);
printf("enter the operator:");
scanf("\n%c",&op);
if(op=='+')
{
printf("sum:%d",num1+num2);
}
else if(op=='-')
{
printf("diff:%d",num1-num2);
}else if(op=='*')
{
printf("mul:%d",num1*num2);
}
else if(op=='/')
{
printf("quotient:%d",num1/num2);
}
return 0;
}