#include<stdio.h>
#include<math.h>
int main()
{
    float p,t,r,si,d;
    printf("enter principle amount,time &rate:\n");
    scanf("%f%f%f",&p,&t,&r);
    si=(p*t*r)/100;
    d=floor(si);
    printf("%f",d);
    return 0;
}
