#include <unistd.h>


int main(int argc,char * argv[])
{
    int i;
    int x;
    if(argc > 0)
    {
       x = argc - 1;
       while(x > 0)
       {
	   i = 0;
	   while(argv[x][i] != '\0')
	   {
               write(1,&argv[x][i],1);
               i++;
	   }
           x--;
	   write(1,"\n",1);
       }
    }
    return 0;
}
