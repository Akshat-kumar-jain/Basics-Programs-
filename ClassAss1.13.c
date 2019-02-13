/*Question 13:To convert decimal numbers to binary.*/

#include<stdio.h>

int main()
{
   int a,b;
   
     printf("Enter the decimal number you want to convert into binary.");
	scanf("%d",&a);
	while(a>0)
		{
		    b=a%2;
			printf("%d",b);
		    a=a/2;
		}
	
	//printf("%d",b);
   return 0;
}
 
