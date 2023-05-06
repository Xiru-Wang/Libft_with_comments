int ft_atoi(const char *str)
{
    int res;
    int sign;

    res = 0;
    sign = 1;

    while ((*str >= 9 && *str <= 13) || *str == 32)
        str++;
    while (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        res = res * 10 + (*str - '0'); //-48
        str++;
    }
    return (sign * res);
}
// char '0' ASCII value = int 48
// char '1' ASCII value = int 49