#include <stdio.h>
#include <stdlib.h>
int ft_strncmp(char * s1,char * s2,unsigned int n)
{
   unsigned int i;
   i = 0;
   while(i < n)
   {
      if((s1[i] > s2[i]) || (s1[i] < s2[i]))	   
         return (s1[i] - s2[i]); 
      i++;
   }

   return 0;
}


int main(int argc,char * argv[])
{
   if(argc >= 2) 
     printf("%s %s %i\n",argv[1],argv[2],ft_strncmp(argv[1],argv[2],(unsigned)(atoi(argv[3]))));

}
