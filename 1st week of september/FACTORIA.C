#include<stdio.h>
#include<conio.h>
void main()
{
int num,i,j,factorial=1;
clrscr();
printf("Enter the number:");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
factorial=factorial*i;
}

printf("The factorial of %d is %d",num,factorial);
getch();
}
