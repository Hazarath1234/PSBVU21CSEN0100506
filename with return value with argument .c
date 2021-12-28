#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter the values of numbers");
    scanf("%d%d%d",&a,&b,&c);
    d=sum(a,b,c);
    printf("%d",d);
}
int sum(int i, int j, int h)
{
    int s;
    s=i+j+h;
    return s;
}
