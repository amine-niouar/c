#include <stdio.h>

int ft_strlen(char * s)
{
   int i;
   i = 0;
   while(s[i] != '\0')
      i++;
   return i;
}

char * ft_strcat(char * dest,char * src)
{ 
   int i,eof;
   
   eof = ft_strlen(dest);
   i = 0;
   while(src[i] != '\0')
   {
      dest[eof] = src[i];
      i++;
      eof++;
   }
   return dest;
}


int main(void)
{
    char name[20] = "amine";
    char lastname[6] = "niouar";

    
    printf("%s %s %s\n",name,lastname,ft_strcat(name,lastname));
    //printf("%s \n",name);
   return 0;
}
