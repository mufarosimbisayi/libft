/**
Allocates (with malloc(3)) and returns a “fresh” substring from the string given as argument.
The substring begins at indexstart and is of size len. If start and len aren’t refer- ing
to a valid substring, the behavior is undefined. If the allocation fails, the function returns NULL.
**/

#include "libft.h"

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char    *ptr;

    ptr = (char *)ft_memalloc(len + 1);
    if (s == NULL || start > ft_strlen(s) || ptr == NULL)
        return (NULL);
    while (s && len > 0)
    {
        ptr = (char*)&s[start];
        start++;
        len--;
    }
    return (ptr);
}