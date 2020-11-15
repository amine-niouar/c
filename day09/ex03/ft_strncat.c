#include <stdio.h>

int ft_strlen(char * s)
{
   int i;
   i = 0;
   while(s[i] != '\0')
      i++;
   return i;
}

char * ft_strncat(char * dest,char * src,unsigned int n)
{
    unsigned int i;
    int eof;
    eof = ft_strlen(dest);
    i = 0;
    
    while(i < n && src[i] != '\0')
    {
       dest[eof] = src[i];
       eof++;
       i++;
    }
    dest[eof] = '\0';
    return dest;
}


int main(void)
{
    char dest[30] = "amine";
    char src[20] = " niouar smiles";

    ft_strncat(dest,src,16); 
   
    printf("%s \n %s \n",dest,src);
   return 0;
}
