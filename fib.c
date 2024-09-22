#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

int iterative(int s)
{
   int  prev_num = 0;
   int  saved_num = 1;
   int  current_num;

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
   if(n == 1)
   {
      return 0;
   }
   else if(n == 2)
   {
      return 1;
   }
   else
   {
      return (recursive(n - 1) + recursive(n-2));
   }
}

int main(int argc, char* argv[]) 
{

   int user_number = atoi(argv[1]);
   int given_number;
   FILE* text;
   FILE* saved;
   
   text = fopen(argv[3], "r");
   saved = fopen("saved_numbers.txt", "r+");

   fscanf(text, "%d", &given_number);

   int sum = user_number + given_number;
   //printf("sum: %d\n", sum);
   int fibo;
   
   if (strcmp(argv[2], "i") == 0)
   {
      fibo = iterative(sum);
   }
   else
   {
      fibo = recursive(sum);
   }
   printf("%d", fibo);
   fclose(text);
   fclose(saved);
   
   return 0;
}
