#include<stdio.h>
int main()
{
   int n,rem=0;
   printf("enter the number:\n");
   scanf("%d",&n);
  while(n!=0)
  {
      rem=n%10;
      printf("%d",rem);
      n/=10;
  }
    return 0;
}
