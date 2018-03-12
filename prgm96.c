#include<stdio.h>
int main()
{
   int n,i,m=0;
   printf("enter the number:\n");
   scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      if(n%i==0)
      {
          m++;
      }
  }
  if(m>2)
  {
      printf("yes");
  }
  else
  {
      printf("no");
  }
    return 0;
}
