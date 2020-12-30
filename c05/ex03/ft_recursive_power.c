#include <unistd.h>
#include <stdio.h>

int ft_recursive_power(int nb,int power)
{
     if(power == 0)
	 return 1;
     else
        return nb * ft_recursive_power(nb,( power - 1 ));

}


int main(void)
{
    printf("the power of number %i is %i\n",2,ft_recursive_power(9,1));
    return 0;
}
