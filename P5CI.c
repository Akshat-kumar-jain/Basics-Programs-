/*P5.39 Program TO multiply two numbers by russian peasant method.*/ 
#include  <stdio.h>

//Compiler version gcc  6.3.0

int main(void)
{
   int a,b,x,y,s=0;
    
    printf("Enter two numbers tobe multiplied:",scanf("%d%d",&x,&y));
    a=x;
    b=y;
    
    while(a>=1)
    {
        if(a%2!=0)
            s=s+b;
        a/=2;
        b*=2;
    }
    
    printf("%d*%d =%d\n",x,y,s);
        
    return 0;
}

