/**
Outputs the string s to the standard output
**/

#include "libft.h"

void    ft_putstr(char const *s)
{
    while (s)
    {
        ft_putchar(*s);
        s++;
    }
}