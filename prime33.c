# include<stdio.h>
void main()
{
int a,b,i,flag=0;
printf("Enter the range");
scanf("%d%d",&a,&b);
while(p<q)
{
for(i=2;i<=p/2;i++)
{
if(a%i==0)
flag=1;
break;
}
}
if(flag==0)
printf("%d",a);
a++;
}
}
