/*P5.27 Program TO Understand the use of brek statement.*/ 
#include  <stdio.h>

//Compiler version gcc  6.3.0

int main(void)
{
    int n;
    
    for(n=1;n<5;n++)
    {
        if(n==3)
            break;
        printf("Numbers=%d\n",n);
    }
    printf("out of for loop.");
    return 0;
}