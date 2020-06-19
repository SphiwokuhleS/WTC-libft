char    *ft_strcat(char *dest, const char *src)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (dest[i] != '\0') //collect the string
    {
        i++;
    }
    while (src[j] != '\0')
    {
        dest[i] = src[j]; // while string src[j] (second string) isn't null first add des[i] string and increment then add src[j] string
        i++;
        j++;
    }

    dest[i] = '\0';
    return (dest);
}