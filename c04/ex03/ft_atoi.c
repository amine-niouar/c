#include <unistd.h>
#include <stdio.h>

int power(int p)
{
   int num,i;
   num = 1;
   i =1;
   while(i < p)
   {
      num *= 10;
      i++;
   }
   return num;
}

int convert_int(char * str,int x,int num)
{
   int number,i;
   i = 0;
   number = 0; 
   while(x > 0)
   {
      number += (str[i] - 48) * power(x);
      i++;    
      x--;
   }

   number *= num;

   return number;
}


int ft_atoi(char * str)
{
   int i,num,zone_num,eof_num,x;
   char cnum[11] = "0";
   num = 1;
   zone_num = 0;
   eof_num = 0;
   x = 0;
   i = 0;
   while(str[i] != '\0')
   {

       if(zone_num == 0)
       {
          if( str[i] == '-')
             num *= -1;
          if(str[i] == '+')
             num *= 1;
       }


       if(str[i] >= '0' && str[i] <= '9' && eof_num == 0)
       {
          cnum[x] = str[i];
          if(x == 0)
              zone_num = 1;
          if(str[i + 1] < '0' && str[i+1] > '9')
              eof_num = 1; 
          x++;
       }
        
       i++;
   }
   cnum[x] = '\0';

   num = convert_int(cnum,x,num);

   return num;     
}

int main(void)
{
  int num;
  num = ft_atoi("-+++12++abcned");
  printf("%i\n",num);
  return 0;
}
