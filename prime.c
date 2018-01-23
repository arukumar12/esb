#include <stdio.h>
#include<math.h>
int main()
{
int n,i;
printf("enter the no");
scanf("%d",&n);
for(i=2;i<=100;i++)
{
if(n%i==0)
{
printf("not prime");
break;
}
else
{
printf(" prime");
break;
}
}
return 0;
}
