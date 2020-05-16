/*P5.29 Program TO find whether a number is even or odd.*/ 
#include  <stdio.h>

//Compiler version gcc  6.3.0

int main(void)
{
    int n;
    printf("Enter a number :",scanf("%d",&n));
    
    if(n%2==0)
        goto even;
    else
        goto odd;
    
    even:
            printf("\nNumber is even.\n");
            goto end;
    odd:
            printf("\nNumber is odd.\n");
            goto end;
    end:
    printf("\n");
    
    return 0;
}
    
