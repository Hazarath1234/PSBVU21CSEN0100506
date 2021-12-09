#include <stdio.h>
int main()
{
	int i,a;
	printf("enter the value of a");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
	if(i<6)
	continue;
	printf("\n %d",i);
}

	return 0;
}
