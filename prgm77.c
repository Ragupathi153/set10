#include<stdio.h>
int main()
{
int i,n,a;
printf("enter the input\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	a=n%i;
	if(a==0)
	{
		printf("%d ",i);
	}
}
return 0;
}
