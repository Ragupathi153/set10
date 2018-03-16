#include<stdio.h>
int main()
{
    int a,b,c=0,d,i;
    printf("enter the two number\n");
    scanf("%d%d",&a,&b);
    d=a*b;
    for(i=0;i<=d;i++)
    {
        if(d==i*i)
        {
            c=1;
            break;
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
