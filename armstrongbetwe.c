#include <stdio.h>
#include<conio.h>
void main()
{
int m,n,i,temp,num,rem;
clrscr();
printf("Enter two numbers(intervals): ");
scanf("%d%d",&m,&n);
for(i=m+1;i<n;++i)
{
temp=i;
num=0;
while(temp!=0)
{
rem=(temp%10);
num+=rem*rem*rem;
temp/=12;
if(i==num)
{
printf("%d",i);
}
}
getch();
