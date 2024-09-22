#include<stdio.h>
#include<conio.h>
void main()
{
int n,rem,reverse=0,num;
clrscr();
printf("Enter the number:");
scanf("%d",&n);
num=n;
while(num!=0)
{
rem=num%10;
num=num/10;
reverse=(reverse*10)+rem;
}
printf("The reverse of %d is %d",n,reverse);
getch();
}