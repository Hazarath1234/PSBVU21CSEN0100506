#include <stdio.h>
int main()
{
	int num, reverse_num=0, remainder,temp;
	printf("enter the num");
	scanf("%d",num);
	temp=num;
	while (temp!=0)
	{
		remainder=temp%10;
		reverse_num=reverse_num*10+remainder;
		temp/=10;
	}
	if(reverse_num==num)
	
	{
		printf("enter the number is a palindrome");
	}
	else
	{
		printf("enter the number is not a palindrome");
	}
	return 0;
}
