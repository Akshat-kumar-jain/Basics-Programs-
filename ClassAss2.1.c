/*Question 1: Read 10 numbers from keyboard and find their sum and average.*/

#include <stdio.h>

int main()
{
  int a,sum=0;
     
	printf("Enter 10 numbers");
	
	
	for(int i=0;i<10;i++)
	{
	scanf("%d",&a);
	sum+=a;
	
	}

       float avg=(float)(sum/10);

	printf("Sum= %d\n. Average= %.2f.\n",sum,avg);
   
  return 0;
}
	
