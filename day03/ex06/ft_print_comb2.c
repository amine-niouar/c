#include <unistd.h>



void ft_print_comb2()
{
    char space,coma,newline;
    coma = ',';
    space = ' ';
    newline = '\n';
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
	       if(a == '9' && b == '8' && c == '9' && d == '9')
		   write(1,&newline,1);
	       else    
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

