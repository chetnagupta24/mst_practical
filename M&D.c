#include<stdio.h>
int main()
{
    int a,b,m,d;

    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    m=a*b;

    printf("Multiplication=%d",m);
    d=a/b;
    printf("Division=%d",d);
    return 0;
}