
char     *ft_strrchr(const char *s, int c)
{
   int x;
   int y;

   x = 0;
   y = 0;

   while (s[x] != '\0')
   {
      x++; //get the length of the string so i can iterate it from the end
   }

   while (y <= x)
   {
      if (s[x - y++] == c) //check if x - 1 is equal to y + 1 if not decrement the strings and increment our search which is y
         return ((char *)&s[x - (y - 1)]); //if the statement is true it'l have to decremnt 1 from y because it increments it, so it goes back one element
   }
   return (NULL);
}