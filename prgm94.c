#include<stdio.h>
int main()
{
    int k,n,a[100],i;
    printf("enter the two numbers:\n");
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d",a[k-1]);
    return 0;
}
