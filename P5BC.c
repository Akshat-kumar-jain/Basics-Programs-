/*P5.22 Program to show the use of comma operator in for loop.*/ 
#include  <stdio.h>

//Compiler version gcc  6.3.0

int main(void)
{
    long i,j;
    
   for(i=0,j=10;i<=j;i++,j--)
   {
       printf("i=%d  j=%d\n",i,j);
   }
  
    return 0;
}