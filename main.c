#include <stdio.h>
#include <stdlib.h>

int main()
{
   //2023.06.26  C lab

   //Q6

   int base,power,value=1,i=0;

   printf("Enter base value:\n");
   scanf("%d",&base);
   printf("Enter power of value:\n");
   scanf("%d",&power);

   if(power==0)
   {
     value=1;
   }
   else
   {
     while(power>i)
     {
         value=value*base;
         i++;
     }
   }
   printf("%d power of %d number is %d\n",power,base,value);

   //Q5

   int number,remind;
   float x;

   printf("enter number:\n");
   scanf("%d",&number);

   do
    {
       remind=number%10;
        number=number/10;
        printf("%d ",remind);
    }while(number!=0);


   //Q4

   int reminder,no,cal=0;

   printf("enter a number:\n");
   scanf("%d",&no);

   while(no!=0)
   {
       reminder=no%10;
       cal=cal+reminder;
       no=no/10;
   }
   printf("output = %d\n",cal);




   // Q3

   int i,num,fact=1;

   printf("Enter a number:\n");
   scanf("%d",&num);
   for(i=1;i<=num;i++)
   {
       fact=fact*i;
   }


   printf(" Factorial of number %d is %d",num,fact);


    return 0;
}
