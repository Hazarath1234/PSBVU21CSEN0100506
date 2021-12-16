#include <stdio.h>
int main()
{
	int a;
	printf("enter the value of a");
	scanf("%d",&a);
	if(a%4==0)
	{
		printf("the year is leap year");
	}
	else
	{
		printf("the year is not leap year");
	}
	return 0;
}
