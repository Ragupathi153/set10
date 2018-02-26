#include <stdio.h>
int main()
{
	int a,b,c,n=0,n1=0;
	printf("enter the three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	n=a*b;
	n1=n%c;
	printf("%d",n1);
	return 0;
}
