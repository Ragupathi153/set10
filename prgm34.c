#include<stdio.h>
int main()
{
    char ch[100];
    int i,count=0;
    printf("enter the paragraph:\n");
    scanf("%[^\n]s",&ch); 
    while(ch[i]!='\0')
    {
        if(ch[i]=='.')
        {
            count++;
        }
        i++;
    }
    printf("%d",count);
    return 0;
}
