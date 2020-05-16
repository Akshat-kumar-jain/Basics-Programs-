/*P5.34 Program TO perform airthmetic calculations on integer.*/ 
#include  <stdio.h>

//Compiler version gcc  6.3.0

int main(void)
{
    int a,b;
    char op;
    printf("Enter number , operator and another number :",scanf("%d%c%d",&a,&op,&b));
    
   switch(op)
   {
       case '+':
           printf("Result=%d\n",a+b);
           break;   /*break statement in switch*/
       case '-':
           printf("Result=%d\n",a-b);
           break;
       case 'x':
       case 'X':    
       case '*':
           printf("Result=%d\n",a*b);
           break;
       case '/':
           printf("Result=%d\n",a/b);
           break;
       case '%':
           printf("Result=%d\n",a%b);
           break;
       default:
           printf("Wrong choice!");
           
   }
    
    return 0;
}
    
