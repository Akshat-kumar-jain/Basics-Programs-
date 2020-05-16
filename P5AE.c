/*P5.15 Program to count the digtis.*/ 
#include  <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
    int  n,count =0;
    
    printf("Enter a number",scanf("%d",&n));
    
    do
    {
        n/=10;
        count++;        
    }while(n>0);

    printf("\nNumber of digits are %d",count);
    return 0;
}