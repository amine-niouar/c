#include <stdio.h>

char * ft_strstr(char * src,char * to_find)
{
   int i,found,j;
   found = 0;
   j = 0;
   i = 0;
   while(src[i] != '\0')
   {
      if(src[i] == to_find[j])
         j++;
      else
         j = 0;

     if(to_find[j] == '\0')
        found = 1;
      i++;
   }

   
   if (found) 
      return to_find; 
   return NULL;
}



int main(void)
{
    char src[30] = "zmazon";
    char find[4] = "maz";
    char * result;
    result = ft_strstr(src,find);
    if(result != NULL)
       printf("%s \n",ft_strstr(src,find));
   else
       printf("NOT FOUND\n"); 
}
