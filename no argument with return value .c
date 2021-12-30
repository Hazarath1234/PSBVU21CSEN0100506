#include <stdio.h>
int sum()
{
    int i,j,s;
    printf("enter the numbers");
    scanf("%d%d",&i,&j);
    s=i+j;
    return s;
}
int main()
{
    int y;
    y=sum();
    printf("%d",y);
}
