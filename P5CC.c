/*P5.32 Program TO understand the switch control statement with break statement.*/ 
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
           break;   /*break statement in switch*/
       case 2:
           printf("Second");
           break;
       case 3:
           printf("Third");
           break;
       default:
           printf("Wrong choice!");
           
   }
    
    return 0;
}
    
