#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
int i,c=0,n;
printf("enter the input\n");
scanf("%s",&a);
n=strlen(a);
for(i=0;i<n;i++)
{
	if(a[i]!=a[n-1-i])
	{
		c++;
		break;
	}
}
if(c==0)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
