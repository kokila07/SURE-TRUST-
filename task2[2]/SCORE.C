#include<stdio.h>
#include<conio.h>
void main()
{
int score;
printf("enter the student score:");
scanf("%d",&score);
if(score>=90)
{
printf("grade is A");
}
else if(score>=80)
{
printf("grade is b");
}
else if(score>=70)
{
printf("grade is c");
}else if(score>=60)
{
printf("grade is d");
}
else if(score<=43)
{
printf("fail");
}
getch();
}
