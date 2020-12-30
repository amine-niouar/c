#include <unistd.h>
#include <stdio.h>

int ft_recursive_factorial(int nb)
{
   if(nb == 1)
     return 1;
   else
       return nb * ft_recursive_factorial(nb-1);
   
}

int main(void)
{
   int nb = 4;
   printf("factorial is %i\n",ft_recursive_factorial(nb));

   return 0;
}
