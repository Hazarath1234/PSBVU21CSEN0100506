#include<stdio.h>

int main()
{
   int input;
   printf("input = 1 //converting celsius to fahrenheit");
   printf("\ninput = 2 //converting fahrenheit to celsius");
   scanf("%d",&input);
   switch(input){
   case 1:
   float c,f;
   printf("enter the temp of celsius");
   scanf("%f",&c);
   f = (c *1.8) +32;
   printf("fahernheit :%f",f);
   break;

   case 2:
   float cel,fahren;
   printf("enter the temp of fahren");
   scanf("%f",&fahren);
   cel = (fahren -32)/1.8;
   printf("cel :%f",cel);
   break;


   }
   return 0;
}

