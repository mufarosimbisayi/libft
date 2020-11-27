/**
converts the initial portion of the string pointed to by str to int representation.
**/

#include "libft.h"

int     ft_atoi(const char *str)
{
    int     sign;
    int     value;

    sign = 1;
    value = 0;
    while (*str && (*str == ' ' || *str == '\n' || *str == '\t' ||
			*str == '\v' || *str == '\f' || *str == '\r'))
		str++;
    if (*str == '-')
        sign = -1;
    if (*str == '+' || *str == '-')
        str++;
    while (str && ft_isdigit(*str))
    {
        value = value * 10 + (*str - '0');
        str++;
    }
    return (sign * value);
}