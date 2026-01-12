#include<stdio.h>
#include<conio.h>
int simple_interest()
{
int p,n,r,si;
clrscr();
printf("Enter the values:");
scanf("%d%d%d",&p,&n,&r);
return p*n*r/100;
}
void mian()
{
int si;
si=simple_interest();
printf("%d",si);
getch();
}