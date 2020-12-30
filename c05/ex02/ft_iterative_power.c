#include <unistd.h>
#include <stdio.h>

int ft_iterative_power(int nb,int power)
{
    if(power < 0)
	    return 0;
    if(power == 0)
       return 1;

    int i;
    i = 1;
    while(i < power)
    {
        nb *= nb;
        i++;
    }
    return nb;
}


int main(void)
{
   printf("the power of number %i is %i\n",3,ft_iterative_power(3,1));
   return 0;
}

