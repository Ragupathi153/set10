#include <stdio.h>
int main()
{
	int n,sum=1,rem=0;
	printf("enter the three numbers\n");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		sum=sum*rem;
		n=n/10;
	}
	printf("%d",sum);
	return 0;
}
