#include<stdio.h>
int main()
{
    int l,b,h,surfacearea,vol;
    printf("enter the length ,width and height:\n");
    scanf("%d%d%d",&l,&b,&h);
    surfacearea=(2*l*b)+(2*b*h)+(2*h*l);
    vol=l*b*h;
    printf("surface:%d\tarea:%d",surfacearea,vol);
    return 0;
}
