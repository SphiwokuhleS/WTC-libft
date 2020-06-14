
int     ft_atoi(const char *str)
{
    long result;
    int sign;

    result  = 0;
    sign = 1;

    while (*str == 32 || (*str >= 9 && *str <= 13))
        str++;

    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    if (*str == '+')
        str++;

    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + *str - '0'; // - '0' removes the last digit, so if 2 was in a string the arithmetic would be 2 * 10 + 1 which is 21 and then removes the one.
        str++;
    }
    return (sign * (int)result);
}