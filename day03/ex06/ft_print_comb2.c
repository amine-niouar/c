#include <unistd.h>



void ft_print_comb2()
{
    char space,coma;
    coma = ',';
    space = ' ';
    char a;
    a = '0';
    while(a <= '9')
    {
       char b;
       b = '0';
       while(b <= '8')
       {
          char c;
          c = a;
          while(c <= '9')
          {
            char d;
            d = b + 1;
            while(d <= '9')
            {
	       write(1,&space,1);	    
	       write(1,&a,1);	    
	       write(1,&b,1);
	       write(1,&space,1);
	       write(1,&c,1);
               write(1,&d,1);
               write(1,&coma,1);	  
               d++;
            }          
            c++;
           }
         b++;
         }
      a++;
    }
}

int main(void)
{
  ft_print_comb2();
  return 0;
}
