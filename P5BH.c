/*P5.28 Program TO FIND WHEATHER  a number is prime or not.*/ 
#include  <stdio.h>
#include<math.h>

//Compiler version gcc  6.3.0

int main(void)
{
    int i,n;
    
    printf("Enter any number\n",scanf("%d",&n));
    
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            break;
    }
    if(i>sqrt(n))
         printf("%d is prime.\n",n);
    else
        printf("%d is not prime.\n",n);
    return 0;
}