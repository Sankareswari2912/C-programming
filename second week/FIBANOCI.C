#include<stdio.h>
#include<conio.h>
void main ()
{
int i,n,t1=0,t2=1;
int next_term=t1+t2;
clrscr();
printf("Enter number of terms:");
scanf("%d",&n);
printf("Fibanocci series:%d\t%d",t1,t2);
for(i=3;i<=n;i++)
{
printf("%d",next_term);
t1=t2;
t2=next_term;
next_term=t1+t2;
}
getch();
}