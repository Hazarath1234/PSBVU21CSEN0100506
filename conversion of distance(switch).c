#include <stdio.h>
int main()
{
	int a,b,c,ch;
	printf("enter the length in centimeters:");
	scanf("%d", &a);
	printf("enter the conversion \n 1.length in meters \n 2.length in kilometers");
	scanf("%d",&ch);
	switch(ch)
	{case 1:
		b=a/100;
		printf("length of conversions centimeters to meters %d",b);
		break;
	 case2:
	 	c=a/1000;
	 	printf("length of conversions centimeters to kilometers %d",c);
	 	break;
	
	}
