/**
Applies the function f to each character of the string passed as argument 
by giving its index as first argument to create a “fresh” new string (with malloc(3)) 
resulting from the suc- cessive applications of f.
**/

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    char    *ptr;

    i = 0;
    ptr = (char *)ft_memalloc(ft_strlen(s) + 1);
    if (!f)
        return (ptr);
    while (s)
    {
        *ptr = f(i++, *s);
        ptr++;
        s++;
    }
    return (ptr);
}