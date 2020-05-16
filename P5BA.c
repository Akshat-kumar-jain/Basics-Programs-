/*P5.21 Program to generate fibonacci series.
1,1,2,3,5,13,...
In this series each number is a sum of previous two numbers.*/ 
#include  <stdio.h>

//Compiler version gcc  6.3.0

int main(void)
{
    long  x,y,z;
    int i,n;
    x=0;
    y=1;
    
    printf("Enter the number of terms:",scanf("%d",&n));
    printf("%ld\n",y);
     
   for(i=2;i<=n;i++)
   {
       z=x+y;
       printf("%ld\n",z);
       x=y;
       y=z;
   }
      
    return 0;
}