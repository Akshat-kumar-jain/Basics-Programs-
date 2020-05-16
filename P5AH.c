/*P5.18 Program to print numbers in reverse order qith difference of 2 using for loop.*/ 
#include  <stdio.h>

//Compiler version gcc  6.3.0

int main(void)
{
    int  n;
    
   for(n=10;n>=1;n=n-2)
       printf("%d\t",n);
    return 0;
}