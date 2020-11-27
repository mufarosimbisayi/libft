/**
function locates the first occurrence of c (converted to an unsigned char) in string s
**/

#include "libft.h"

void    *ft_memchr(const void *src, int c, size_t n)
{
    while (n--)
    {
        if (((unsigned const char *)src)[n] == (unsigned char)c)
            return ((void *)src + n);
    }
    return (NULL);
}