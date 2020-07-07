char *ft_strstr(const char *haystack, const char *needle)
{

   int x;
   int y;

   x = 0;
   y = 0;

   if (needle[0] == 0)
      return ((char *)&haystack[x]); //if needle is empty return the whole string

   while (haystack[x] != '\0') 
   {
      while ((haystack[x + y] == needle[y]) && needle[y])
      {
         y++; //if the next element in x is part of y start iterating y
      }
      if (needle[y] == '\0')  //return the address pointed  at x if y hits null
      {
         return((char *)&haystack[x]);
      }
      y = 0;
      x++;
   }  
   return (NULL);
}