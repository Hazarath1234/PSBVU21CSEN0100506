#include<stdio.h>
#include<math.h>

int main(){
	int a,b,c;
	printf("enter the first angle");
	printf("\nenter the second angle");
	scanf("%d%d",&a,&b);
	c = 180-(a+b);
	printf("the value of the third angle:%d",c);
	return 0;
}
