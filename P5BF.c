/*P5.26 Program TO FIND the sum of digits of a number until the sum is reduced to 1 digit.
        For example - 538769->38->11->2*/ 
#include  <stdio.h>

//Compiler version gcc  6.3.0

int main(void)
{
    long num;
    int dig,sum;
    
    printf("Enter a number :");
    scanf("%ld",&num);
    printf("%ld->",num);
    
    do{
        sum=0;
        while(num!=0)
        {
            dig=num%10;
            sum+=dig;
            num/=10;
        }
        printf("%d\t->",sum);
       num=sum;
        
    }while(num/10!=0); /*While num is more than one digit*/
    return 0;
}