#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char * src)
{
   int i;
   while(src[i] != '\0')
     i++;
   return i;
}


char * ft_strdup(char * src)
{
   char * buffer;
   int i;
   buffer = malloc( (ft_strlen(src) + 1) * sizeof(char));

   i = 0;
   while(src[i] != '\0')
   {
       buffer[i] = src[i];
       i++;
   }

   buffer[i] = '\0';
   return buffer;
}


int main()
{
   char name[20] = "mohammed";

   char * sname;
   sname = ft_strdup(name);

   printf("%s %s \n",name,sname);

}
