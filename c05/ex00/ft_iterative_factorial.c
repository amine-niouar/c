#include <unistd.h>
#include <stdio.h>
int ft_iterative_factorial(int nb)
{
   if(!nb )
      return 0;
   int result;
   result = 1;
   while(nb > 0)
   {
      result *= nb;	   
      nb--;
   }	   
   return result;
}


int main(void)
{
  int nb,result;
  nb = 4;
  result = ft_iterative_factorial(nb);  
  printf("the factorial of %i  is  %i\n",nb,result);
  return 0;
}

