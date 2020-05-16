/*P5.41 Program TO FIND day of week from a given date.*/ 
#include  <stdio.h>

//Compiler version gcc  6.3.0

int main(void)
{
   int d,m,y,j,f,h,fh,day;
    
    printf("Enter date (dd/mm/yyyy): ",scanf("%d%*c%d%*c%d",&d,&m,&y));
    
    j=d;
    switch(m-1)
    {
        case 11: j+=30;
        case 10: j+=31;
        case 9:  j+=30;
        case 8:  j+=31;
        case 7:  j+=31;
        case 6:  j+=30;
        case 5:  j+=31;
        case 4:  j+=30;
        case 3:  j+=31;
        case 2:  j+=28;
        case 1:  j+=31;    
    }
    
    if(y%100!=0 && y%4==0 || y%400==0)
        if(m>2)
            j=j+1;
    f=(y-1)/4;
    h=(y-1)/4;
    fh=(y-1)/400;
    day=(y+j+f-h+fh)%7;
    
    switch(day)
    {
        case 0:printf("Saturday\n");
        case 1:printf("Sunday\n");
        case 2:printf("Monday\n");
        case 3:printf("Tuesday\n");
        case 4:printf("Wednesday\n");
        case 5:printf("Thursday\n");
        case 6:printf("Friday\n")   ; 
    }
          
    return 0;
}

