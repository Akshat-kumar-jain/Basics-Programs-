/*P5.25 Program to Print Armstrong number.*/ 
#include  <stdio.h>

//Compiler version gcc  6.3.0

int main(void)
{
    long num,n,cube,d,sum;
    printf("Armstrong numbers are:\n");
    
   for(n=100;num<=999;num++) /*Outer loop to generate numbers*/
   {
      n=num;
       sum=0;
       while(n>0)   /*Inner loop to calculae  sum of cube of digits.*/
       {
           d=n%10;
           n/=10;
           cube=d*d*d;
           sum=sum+cube;
       }/*End of While loop*/
       if(num==sum)
           printf("%d\n",num);
   }
  
    return 0;
}