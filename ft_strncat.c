char    *ft_strncat(char *dest, const char *src, size_t n)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[j] != '\0' && n > 0)
    {
        dest[i] = src[j];
        i++;
        j++;
        n--;
    }

    dest[i] = '\0';
    return (dest);
}