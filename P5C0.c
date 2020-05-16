/*P5.29 Program TO UNDERSTAND THE USE OF CONTINUE STATEMENT.*/ 
#include  <stdio.h>

//Compiler version gcc  6.3.0

int main(void)
{
    int n,i=1,sum=0;
    float avg;
    
    while(i<=10)
    {
        printf("Enter number: %d\n",i,scanf("%d",&n));
        
        if(n<0)
        {
            printf("Enter only positive numbers.\n");
            continue;
        }
        sum+=n;
        i++;
        
    }
    avg=sum/10.0;
    printf("Sum = %d Avg = %f",sum,avg);
    
    return 0;
}
    
