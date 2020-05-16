/*P5.38 Program TO find DIfference of two dates in years , months , days.*/ 
#include  <stdio.h>

//Compiler version gcc  6.3.0

int main(void)
{
   int d,d1,d2,m,m1,m2,y,y1,y2;

    printf("Enter first date (dd/mm/yyyy):\n",scanf("%d%*c%d%*c%d",&d1,&m1,&y1));
     printf("Enter second date (dd/mm/yyyy):\n",scanf("%d%*c%d%*c%d",&d2,&m2,&y2));
    
    if(d2<d1)
    {
        if(m2==3)
        {
            if(y2%100!=0 && y2%4==0 || y2%400==0)
                d2=d2+29;
            else
                d2=d2+28;
        }
        else if (m2==5||m2==7||m2==10||m2==12)
            d2=d2+30;
        else
            d2=d2+31;
        m2=m2-1;
        
    }
    if(m2<m1)
    {
        y2=y2-1;
        m2=m2+12;
    }
    y=y2-y1;
    m=m2-m1;
    d=d2-d1;
    
    printf("\nDifference of the two dates is :");
    printf("%d years %d month %d days\n",y,m,d);
    
    return 0;
}

