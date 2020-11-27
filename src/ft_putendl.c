/**
Outputs the string s to the standard output followed by a ’\n’.
**/

#include "libft.h"

void    ft_putendl(char const *s)
{
    ft_putstr(s);
    write(1, "\n", 1);
}