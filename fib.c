#include <stdio.h>

int main() 
{

   int number;
   char letter;
   char name;

   printf("Enter a number, r or i, and a file name: \n");
   

   scanf("%d %s %s" , &number, &letter, &name);

   printf("\ninputted: %d %s %s" , number, letter, name);


   return 0;
}
