#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

int64_t iterative(int s)
{
   int64_t  prev_num = 0;
   int64_t  saved_num = 1;
   int64_t  current_num;

   for(int i = 2; i < s; i++)
   {
      current_num = prev_num + saved_num;
      prev_num = saved_num;
      saved_num = current_num;
   }
   return current_num;
}

int64_t recursive(int64_t n)
{
   if(n == 0)
      return 0;
   else if(n == 1)
      return 1;
   else
      return (recursive(n-1) + recursive(n-2));
}

int main(int argc, char* argv[]) 
{

   int user_number = atoi(argv[1]);
   int given_number;
   FILE* text;
   
   text = fopen(argv[3], "r");

   fscanf(text, "%d", &given_number);

   int sum = user_number + given_number;
   printf("sum: %d\n", sum - 1);
   int64_t fibo;
   
   if (strcmp(argv[2], "i") == 0)
   {
      fibo = iterative(sum);
   }
   else
   {
      for(int i = 0; i < sum; i++)
      {
         fibo = recursive(i);
      }
   }
   printf("%ld" PRIi64 "\n", fibo);
   fclose(text);
   
   return 0;
}
