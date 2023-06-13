#include<stdio.h>
int main()
{
int myNumbers[5];
int i;
int sum=0;
for(i=0;i<5;i++)
{
printf("\n enter the %d elements in the array:",i);
scanf("%d",&myNumbers[i]);
}
printf("\n elements in the array are:");
for(i=0;i<5;i++)
{
sum=sum + myNumbers[i];
printf("%d\t",myNumbers[i]);
}
printf("\n");
printf("\n total sum of the array is %d",sum);
return 0;
}