#include <stdio.h>
int sum(int i,int j)
{
    printf("%d",i+j);
}
int main()
{
    int a,b;
    printf("enter the two numbers");
    scanf("%d%d",&a,&b);
    sum(a,b);
}
