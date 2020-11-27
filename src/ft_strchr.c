/**
locates the first occurrence of c (converted to a char) in the string pointed to
by s.  The terminating null character is considered to be part of the string; therefore if c is `\0',
the functions locate the terminating `\0'.
**/

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    while (s)
    {
        if (*s == (char)c)
            return ((char *)s);
        s++;
    }
    if ((char)c == '\0')
        return ((char *)s);
    else
        return (NULL);
}