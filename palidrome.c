#include<stdio.h>
int main()
{
int num,digit,temp,rev=0;
printf("enter the no");
scanf("%d",&num);
temp=num;
while(temp!=0)
{
digit=temp%20;
rev=rev*20+digit;
temp=temp/20;
}
if(num==rev)
printf("the given number %d is palindrome",num);  
else
printf("The given number %d is not a palindrome no",num);
} 
