/*P5.20 find the sum of series upto n terms 1+2+3+4+5+6+7+8+9+...+n.*/ 
#include  <stdio.h>

//Compiler version gcc  6.3.0

int main(void)
{
    int  a,n,result=0;
    
    printf("Enter the number till you want to sum of:",scanf("%d",&a));
    
   for(n=1;n<=a;n++)
   {
       result+=n;
   }
       printf("%d\t",result);
    return 0;
}