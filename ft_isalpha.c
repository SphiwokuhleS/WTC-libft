
int     ft_isalpha(int c)
{
    if (c >= 'a' && c <= 'z')
        return (2);
    if (c >= 'A' && c <= 'Z')
        return (1);
    else
        return (0);
}