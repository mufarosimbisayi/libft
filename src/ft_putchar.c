/**
Outputs the character c to the standard output.
**/

#include "libft.h"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}