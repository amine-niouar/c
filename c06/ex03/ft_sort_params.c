#include <unistd.h>

void ft_print_params(char * argv[],int argc)
{
    int i;
    int x;
    i = 1;
    while(i < argc)
    {
	x = 0;
        while(argv[i][x] != '\0')
	{
           write(1,&argv[i][x],1);
           x++;
	}
        write(1,"\n",1);	
        i++;
    }
	
}

int ft_strcmp(char * s1,char * s2)
{
    int i,r;
    i = 0;
    r = 0;
    while(s1[i] != '\0' && s2[i] != '\0')
    {
         if(s1[i] > s2[i] || s1[i] < s2[i])
            return (s1[i] - s2[i]);		 
         i++;
    }
    return r;
}


int main(int argc,char * argv[])
{
    int i;
    int x;
    char * tab;
    tab = argv[0];
    i = 1;
    if(argc > 0)
    {
       while(i < argc)
       {
           x = 1;
     
	   while(x < argc)
	   {
               if( ft_strcmp(argv[i],argv[x]) > 0 )
	       {
		   tab = argv[i];    
                   argv[i] = argv[x];
		   argv[x] = tab;
	       }
	       x++;
	   }

	   i++;
       }

       ft_print_params(argv,argc);
    }
}
