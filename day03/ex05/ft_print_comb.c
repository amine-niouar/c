#include <unistd.h>

void print_abc(char a,char b,char c)
{
   char coma,newline;
   coma = ',';
   newline = '\n';
   write(1,&a,1);
   write(1,&b,1);
   write(1,&c,1);
   if(a == '7' && b == '8' && c == '9')
     write(1,&newline,1);
   else
     write(1,&coma,1);   
}


void ft_print_comb()
{
   char a;
   a = '0';
   while(a <= '7')
   {
      char b;
      b = a + 1;
      while(b <= '8')
      {
          char c;
	  c = b + 1;
	  while(c <= '9')
	  {
             print_abc(a,b,c);
             c++;
	  }
          b++;
      }      
      a++;
   }

}

