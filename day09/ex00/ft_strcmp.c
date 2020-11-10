#include <stdio.h>
int ft_strcmp(char *s1,char *s2)
{
   int i,r;
   i = 0;
   r = 0;
   while(s1[i] != '\0' || s2[i] != '\0')
   {
      if( (s1[i] < s2[i]) || ( s1[i] > s2[i] ))
         return (s1[i] - s2[i]);       
      i++;
   }

   return r;
}

int main(int argc,char * argv[])
{
  if(argc >= 2)
     printf("%s %s %i\n",argv[1],argv[2],ft_strcmp(argv[1],argv[2]));	  

  return 0;
}
