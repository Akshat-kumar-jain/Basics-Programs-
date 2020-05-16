/*P5.32 Program TO understand the switch control statement.*/ 
#include  <stdio.h>

//Compiler version gcc  6.3.0

int main(void)
{
    int n;
    printf("Enter your choice :",scanf("%d",&n));
    
   switch(n)
   {
       case 1:
           printf("First\n");
       case 2:
           printf("Second");
       case 3:
           printf("Third");
       default:
           printf("Wrong choice!");
           
   }
    
    return 0;
}
    
