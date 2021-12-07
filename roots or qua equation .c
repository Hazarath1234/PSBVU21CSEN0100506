#include <stdio.h>
#include <math.h>
int main()
{
	double r1,r2,a,b,c,d;
	printf("enter the coefficients of quadratic equation a,b,c");
	scanf("%lf%lf%lf",&a,&b,&c);
	d=(b*b)-(4*a*c);
	if(d>0)
	{
		r1=(-b+sqrt (d))/(2*a);
		r2=(-b-sqrt (d))/(2*a);
		printf("the real roots are %.2lf%.2lf",r1,r2);
	}
	else if(d=0)
	{
		r1=b/2*a;
		r2=b/2*a;
		printf("the equal roots are %.2lf%.2lf",r1,r2);
	}
	else
	{
		printf("the roots are imaginary",r1,r2);
	
	}
	
}
		
	
