/**
appends not more than n characters from s2, and then adds a terminating `\0'
**/

# include "libft.h"

char    *ft_strncat(char *s1, const char *s2, size_t n)
{
    size_t i;

    i = ft_strlen((const char *)s1);
    s1[i + n] = '\0';
    while (n--)
    {
        s1[i + n] = s2[n];
    }
    return (s1);
}