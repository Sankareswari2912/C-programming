#include<stdio.h>
#include<conio.h>
void main()
{
int rem,min=9,max=0,i,num;
clrscr();
printf("Enter the number");
scanf("%d",&num);
for(i=num;i!=0;i=i/10)
{
rem=i%10;
if(rem>max)
 max=rem;
if(rem-min)
min=rem;
}
printf("max=%d\n min=%d\n range=%d\n",max,min,max-min);
getch();
}
