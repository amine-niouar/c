#include <stdio.h>

void ft_swap(int *a,int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main(void)
{
   int a,b;
   int *pa,*pb;
   a = 5;
   b = 6;

   pa = &a;
   pb = &b;

   printf("%i %i \n",a,b);
   ft_swap(pa,pb);
   printf("%i %i \n",a,b);

}
