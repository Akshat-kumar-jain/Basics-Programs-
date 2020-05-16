/*P5.34 Program TO find whether the alphabet is a vowel or constant.*/ 
#include  <stdio.h>

//Compiler version gcc  6.3.0

int main(void)
{
    char ch;
    printf("Enter an alphabet :",scanf("%c",&ch));
    
   switch(ch)
   {
       case 'a':
       case 'e':    
       case 'i':
       case 'o':
       case 'u':
       case 'A':
       case 'E':
       case 'I':
       case 'O':
       case 'U':    
           printf("Alphabet is a vowel.\n");
           break;
       
       default:
           printf("Alphabet is a consonent.\n");
           
   }
    
    return 0;
}
    
