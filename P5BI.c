/*P5.29 Program TO UNDERSTAND THE USE OF CONTINUE STATEMENT.*/ 
#include  <stdio.h>

//Compiler version gcc  6.3.0

int main(void)
{
    int n;
    
    for(n=1;n<=5;n++)
    {
        if(n==1)
            continue;
        printf("Number=%d\n",n);
    }
    
    printf("Out of the loop.");
    
    return 0;
}
    
