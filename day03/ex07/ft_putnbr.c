#include <unistd.h>
#include <stdio.h>
void ft_putnbr(int nb)
{
   int temp,mod,negative,pow;
   char c_negative,c_nb;
   temp = 0;
   negative = 0;
   c_negative = '-';
   c_nb = '0';
   pow = 1;
   
   if(nb > 0)
     temp = nb;
   else
   {
      temp = nb * -1;
      negative = 1;
   }

   if(negative)
      write(1,&c_negative,1);

  
   mod = 0;
   while(temp > 0)
   {	   
      mod = temp % 10;
      c_nb += mod;
      write(1,&c_nb,1);
      temp /= pow;
      c_nb = '0';
   }

}


int main(void)
{
   ft_putnbr(-15);	
   return 0;
}
