#include<stdio.h>
void main()
{
int n[10],num,i,k;
scanf("%d",&num);
for(i=0;i<num;i++)
{
scanf("%d",&n[i]);
}
k=0;
for(i=0;i<num;i++)
{
if(n[i]>k)
{
k=n[i];
}
}
printf("%d",k);
}
