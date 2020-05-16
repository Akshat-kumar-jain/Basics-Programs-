/*P5.19 Multiply two positive numbers without using operators.*/ 
#include  <stdio.h>

//Compiler version gcc  6.3.0

int main(void)
{
    int  a,b,n,result=0;
    
    printf("Enter two numbers:",scanf("%d%d",&a,&b));
    
   for(n=1;n<=b;n++)
   {
       result+=a;
   }
       printf("%d\t",result);
    return 0;
}