/*P5.40 Program TO FIND out the number of notes required for a given amount of money.*/ 
#include  <stdio.h>

//Compiler version gcc  6.3.0

int main(void)
{
   int n,choice ,notes;
    
    printf("Enter the total number of rupees:",scanf("%d",&n));
    printf("Enter the value of note from which you want to begin :",scanf("%d",&choice));
    
    switch(choice)
    {
        case 100:
            notes=n/100;
            printf("Number of 100 Rs notes =%d\n",notes);
        case 50:
            notes=n/50;
            printf("Number of 50 Rs notes =%d\n",notes);
        case 20:
            notes=n/20;
            printf("Number of 20 Rs notes =%d\n",notes);
        case 10:
            notes=n/10;
            printf("Number of 10 Rs notes =%d\n",notes);
        case 5:
            notes=n/5;
            printf("Number of 5 Rs  notes =%d\n",notes);
        case 2:
            notes=n/2;
            printf("Number of 2 Rs notes =%d\n",notes);
        case 1:
            notes=n/1;
            printf("Number of 1 Rs notes =%d\n");
            break;
        default:
            printf("Enter only valid values.");
            break;
                }
    printf("\n");
          
    return 0;
}

