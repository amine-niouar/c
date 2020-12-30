#include <unistd.h>
#include <stdio.h>
int ft_strlen(char * src)
{
    int i;
    i = 0;
    while(src[i] != '\0')
       i++;
    return i;
}

int ft_strlcat(char * dest,char * src,unsigned int size)
{
   // step 1 copy dest to src
   // dest[20] = "amin"
   // a m i n \0
   // 0 1 2 3 4
   // a m i n l a n g u a g e   c   
   // src[10] = "language c"
   
   
   unsigned int i;
   unsigned int eof_dest;


   eof_dest = ft_strlen(dest);
   //eof_dest -= 1;
   //printf("size dest is %i %i %i\n",eof_dest,eof_src,size);
   //dest[eof_dest] = src[0];
   i = 0;
   while(i < size && src[i] != '\0')
   {
     dest[eof_dest] = src[i];
     eof_dest++;
     i++;
   }	   
 
   dest[eof_dest] = '\0';



   return ( ft_strlen(dest) + ft_strlen(&src[i]));
}


int main(void)
{
  char src[20] = " virtualbox";
  char dest[30] = "oracle vm";
  unsigned int result; 
   printf("%s \n",dest);

  result = ft_strlcat(dest,src,11);

  printf("%s %u \n",dest,result);

  return 0;
}
