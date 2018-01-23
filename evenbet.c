#include <stdio.h>
int main(void) 
{
	int a,b,i=0;
	scanf("%d%d",&a,&b);
	for(i=a;i<b;i++)
	{
		if(i%2==0)
		printf("%d",i);
	}
	return 0;
}
