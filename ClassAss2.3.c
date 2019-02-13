/*Question 3: To display the multiplication of a given number.*/

#include<stdio.h>

int main(void)
{
   int a,i;

   printf("Please enter the number to print it's table : ");
   scanf("%d",&a);

	for(i=1;i<=10;i++)
		{
		   int b=a*i;
		   printf("%d\n",b);
		   
		}
   
   return 0;
}
