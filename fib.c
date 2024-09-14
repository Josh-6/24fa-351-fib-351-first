#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int main(int argc, char* argv[]) 
{

   int user_number = atoi(argv[1]);
   int given_number;
   FILE* text;
   
   text = fopen(argv[3], "r");

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
      for(int i = 0; i < sum; i++)
      {
         fibo = recursive(i);
      }
   }
   //printf("%d\n", fibo);
   fclose(text);
   
   return 0;
}
