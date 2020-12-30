#include <stdio.h>
#include <stdlib.h>


int * ft_range(int min,int max)
{
   int size;
   int * tab;
   int i;
   size = max - min;
   tab = malloc(size * sizeof(int));
   i = 0;
   while(min < max)
   {
      tab[i] = min;
      min++;
   }
   return tab;   
}



int main()
{
  int * tab;
  int i;
  int c;
  c = 9 - 5;
  tab = ft_range(5,9);
  i = 0;

  while(i < c)
  {
     printf("%i ,",tab[i]);
     i++;
  }
  printf("\n");
  return 0;
}
