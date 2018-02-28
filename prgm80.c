#include<stdio.h>
int main()
{
int i,n,n1[200],a;
scanf("%d ",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&n1[i]);
	
}
for(i=0;i<n;i++)
{
	a=n1[i]%2;
	if(a==1)
	{
		printf("%d ",n1[i]);
	}
}
return 0;
}
