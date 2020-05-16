/*P5.22 Program to PRINT the sum of digits of and any number using loop.*/ 
#include  <stdio.h>

//Compiler version gcc  6.3.0

int main(void)
{
    long  n,sum=0,rem;
    
    printf("Enter the number:\n",scanf("%d",&n));
   
     
   for(;n>0;n/=10)
   {
       rem=n%10;
       sum+=rem;
   }
    
    printf("Sum of Digits:%d\n",sum);
      
    return 0;
}