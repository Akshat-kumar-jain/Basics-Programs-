/*P5.24 Program to UNDERSTAND nesting in for loop.*/ 
#include  <stdio.h>

//Compiler version gcc  6.3.0

int main(void)
{
    long i,j;
    
   for(i=1;i<=3;i++)
   {
       printf("i=%d\n",i);
       for(j=1;j<=4;j++)
           printf("j=%d\t",j);
       printf("\n");
   }
  
    return 0;
}