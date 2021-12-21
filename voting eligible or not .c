#include <stdio.h>
int main ()
{
	int a;
	printf("enter the value of a");
	scanf("%d",&a);
	if(a%20==0)
	{
		printf("the person eligible for voting");
	}
	else
	{
		printf("the person is not eligible for voting");
	}
	return 0;
}
