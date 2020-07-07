
//I'm not sure about any of these functions :)
char *ft_strchr(const char *s, int c)
{
   int x;

   x = 0;

   if (c == 0)
      return (NULL);

   while (s[x] != '\0')
   {
      if (s[x] == c)
         return ((char *)&s[x]);
      x++;
   }
   return (NULL);
}