#include <stdio.h>
#include <stdlib.h>


int iterative(int s)
{
   int prev_num = 0;
   int saved_num = 1;
   int current_num;

   for(int i = 2; i < s; i++)
   {
      current_num = prev_num + saved_num;
      prev_num = saved_num;
      saved_num = current_num;
   }
   return current_num;
}

int recursive(int n)
{
   if(n == 0)
      return 0;
   else if(n == 1)
      return 1;
   else
      return (recursive(n-1) + recursive(n-2));
}



int main() 
{

   int user_number;
   int given_number;
   char letter;
   char file[10];
   FILE* text;

   //printf("Enter a number, r or i, and a file name: \n");
   
   scanf("%d %c %s" , &user_number, &letter, file);

   //printf("\ninputted: %d %c %s\n" , user_number, letter, file);

   text = fopen(file, "r");


   fscanf(text, "%d", &given_number);

   //printf("file number: %d\n", given_number);

   int sum = user_number + given_number;
   int fibo;
   
   if (letter == 'i')
   {
      printf("file number: %d\n", sum);
      fibo = iterative(sum);
   }
   else
   {
      for(int i = 0; i < sum; i++)
      {
         fibo = recursive(i);
      }
   }
   printf("%d", fibo);

   return 0;
}
