/**
Allocate (with malloc(3)) and returns a “fresh” string 
end- ing with ’\0’ representing the integer n given as argument. 
Negative numbers must be supported. If the 
allocation fails, the function returns NULL.
**/

#include "libft.h"

static int  ft_intstrsize(int n)
{
    int     count;

    count = 1;
    while (n > 9)
    {
        n = n / 10;
        count++;
    }
    return (count);
}

char    *ft_itoa(int n)
{
    int     count;
    int     sign;
    char    *str;

    str = NULL;
    count = 0;
    sign = 1;
    if (n < 0)
    {
        sign = -1;
        n = n * -1;
    }
    count = ft_intstrsize(n);
    if (sign == -1)
        count++;
    str = ft_strnew(count);
    if (n == 0)
    {
        str[0] = '0';
        return (str);
    }
    while(--count > 0)
    {
        str[count] = (n % 10) + '0';
        n = n / 10;
    }
    if (sign == -1)
        str[0] = '-';
    return (str);
}