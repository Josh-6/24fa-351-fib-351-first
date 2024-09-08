#include <stdio.h>
#include <stdlib.h>

int main() 
{

   int user_number;
   int given_number;
   char letter;
   char file[10];
   FILE* text;

   printf("Enter a number, r or i, and a file name: \n");
   
   scanf("%d %c %s" , &user_number, &letter, file);

   printf("\ninputted: %d %c %s\n" , user_number, letter, file);

   text = fopen(file, "r");

   fscanf(text, "%d", &given_number);

   printf("file number: %d\n", given_number);

   return 0;
}


   return 0;
}


   int sum = user_number + given_number;

   int current = 1;
   int old = 0;
   int save;
   if (letter == 'r')
   {
      for (int i = 0; i < sum; i++)
      {
         
      }
   }

   return 0;
}
