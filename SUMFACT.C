#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,num;
float sum=0,factorial;
clrscr();
printf("Enter the number:");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
factorial=1;
for(j=1;j<=i;j++)
{
factorial=factorial*j;
}
sum=(float)sum+(i/factorial);
}
printf("The sum is:%f",sum);
getch();
}