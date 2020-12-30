#include <unistd.h>


int main(int argc,char * argv[])
{
   char newline;
   newline = '\n';   
   if(argc > 0)
   {
      int i,x;
      i = 1;
      while(i < argc)
      {
	 x = 0;
	 while(argv[i][x] != '\0')
	 {
            write(1,&argv[i][x],1);		 
            x++;
	 }
	 write(1,&newline,1);
         i++;
      }
   }	   


   return 0;
}
