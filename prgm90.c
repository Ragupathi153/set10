#include<stdio.h>
int main()
{
   char ch[40];
   int i;
   printf("enter the alphanumeric string:\n");
   scanf("%[^\n]s",&ch);
   for(i=0;ch[i]!='\0';i++)
   {
       if((ch[i]>='0')&&(ch[i]<='9'))
       {
           printf("%c",ch[i]);
       }
   }
    return 0;
}
