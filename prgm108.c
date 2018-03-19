#include<stdio.h>
void main()
{
 int a,d,n,i,s=0;
 printf("inputs :");
 scanf("%d %d %d",&a,&d,&n);
 for(i=0;i<n;i++)
 {
     s=s+(a+(n*d));
 }
printf("%d",s/2);
}
