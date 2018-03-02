#include <stdio.h>
int main()
{
	int a,b,c;
	float d;
	printf("enter the two numbers:\n");
	scanf("%d%d",&a,&b);
	c=a*b;
	d=sqrt(c);
	if(d==a)
	{
	if(d==b)
	{
	printf("yes");
	}
	}
	else
	{
	printf("no");
}
return 0;	
}

