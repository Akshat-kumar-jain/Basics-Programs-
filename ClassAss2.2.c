/*Question 2: To display the cube of the number upto given an integer.*/

#include<stdio.h>

int main()
{
  int a,i;

  printf("Enter the number till you want to print the cube off.\n");
  scanf("%d",&a);

	for(i=1;i=a;i++);
		{
		   int cube = (i*i*i);
		   printf("cube of number ",i," is %lf",cube);
		}

  return 0;
}
