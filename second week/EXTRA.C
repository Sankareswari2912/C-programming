#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,sum,difference;
clrscr();
printf("Enter number 1:");
scanf("%d",&n1);
printf("Enter number 2:");
scanf("%d",&n2);
if(n1>n2)
{
difference=n1-n2;
printf("The difference is :%d",difference);
}
else
{
sum=n1+n2;
printf("The sum is :%d",sum);
}
getch();
}
