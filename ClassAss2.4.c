/* Question 4a: To display the pattern like 
	*
	**
	***
	****
*/

#include<stdio.h>

int main()
{
  int i,j;

  for(i=0;i<=3;i++)
    {
	for(j=1;j<=i;j++)
	   {		
		printf("*");
	   }
        printf("*\n");
	
     }

   return 0;
}