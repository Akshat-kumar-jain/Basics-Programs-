/*P5.16 Program to find the sum of numbers entered.*/ 
#include  <stdio.h>

//Compiler version gcc  6.3.0

int main(void)
{
    int  n,sum=0;
    
    do
    {
        printf("Enter a number\n",scanf("%d",&n));
        sum+=n;     
    }while(n!=0);

    printf("\nSum of numbers are %d",sum);
    return 0;
}