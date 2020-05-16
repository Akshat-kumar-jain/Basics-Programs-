/*P5.14 Program to print number from 1 to 10 using a do while loop.*/ 
#include  <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
    int  i = 1;
    
    do
    {
        printf("%d\t",i);
        i=i+1;
        
    }while(i<=10);
    
    return 0;
}