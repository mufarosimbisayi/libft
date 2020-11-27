/**
locates the last occurrence of c (converted to a char) in the string pointed to
by s.  The terminating null character is considered to be part of the string; therefore if c is `\0',
the functions locate the terminating `\0'.
**/

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    size_t i;

    i = ft_strlen(s) + 1;
    while (i--)
    {
        if (s[i] == (char)c)
            return ((char *)s);
    }
    return (NULL);
}