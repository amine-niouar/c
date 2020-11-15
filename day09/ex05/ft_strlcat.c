#include <stdio.h>

int ft_strlen(char * s)
{
   int i;
   i = 0;
   while(s[i] != '\0')
      i++;
   return i;
}

unsigned int ft_strlcat(char * dest,char * src,unsigned int size)
{
   unsigned int i;
   int eof;
   eof = ft_strlen(dest);
   i = 0;
    
   while(i < size && src[i] != '\0')
   {
       dest[eof] = src[i];
       eof++; 
       i++;
   } 
   
   dest[eof] = '\0';
   return eof;
}

int main(void)
{
   char dest[20] = "amine";
   char src[20] = "niouar 10";
   
   printf("%u %s",ft_strlcat(dest,src,6),dest);

   return 0;
}
