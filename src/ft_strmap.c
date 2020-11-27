/**
Applies the function f to each character of the string given as argument to create a “fresh” new
 string (with malloc(3)) resulting from the successive applications of f.
**/

#include "libft.h"

char    *ft_strmap(char const *s, char (*f)(char))
{
    char    *ptr;

    ptr = (char *)ft_memalloc(ft_strlen(s) + 1);
    if (!f)
        return (ptr);
    while (s)
    {
        *ptr = f(*s);
        ptr++;
        s++;
    }
    return (ptr);
}