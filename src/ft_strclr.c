/**
Sets every character of the string to the value ’\0’
**/

#include "libft.h"

void    ft_strclr(char *s)
{
    ft_memset(s, (int)'\0', ft_strlen((const char*)s));
}