#include<stdio.h>
int main()
{
 int a,b,n[60],c=0,i;
 printf("inputs :");
 scanf("%d %d ",&a,&b);
 for(i=0;i<a;i++)
 {
 	scanf("%d",&n[i]);
 }
 for(i=0;i<a;i++)
 {
     if(n[i]==b)
     {
     c++;;
     }
  }
  if(c==1)
  {
  	printf("yes");
  }
  else
  {
  	printf("no");
  }
 
 
return 0;
}
