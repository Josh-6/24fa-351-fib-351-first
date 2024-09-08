#include <stdio.h>

int main() 
{

   int number;
   char letter;
   char file[10];

   printf("Enter a number, r or i, and a file name: \n");
   
   scanf("%d %c %s" , &number, &letter, file);

   printf("\ninputted: %d %c %s\n" , number, letter, file);

   return 0;
}
