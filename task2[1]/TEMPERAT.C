#include<stdio.h>
int main()
{
int temp;
printf("enter the current temperature in degree celsius:");
scanf("%d",&temp);
if(temp<30)
{
printf("temperature is within limit");
}
else
{
printf("temperature exceeds the limit");
}
return 0;
}