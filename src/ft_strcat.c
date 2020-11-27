/**
append a copy of the null-terminated string s2 to the end of the
     null-terminated string s1, then add a terminating `\0'
**/

#include "libft.h"

char    *ft_strcat(char *s1, const char *s2)
{
    size_t i;
    size_t j;

    i = ft_strlen(s2);
    j = ft_strlen((const char *)s1);
    while (i > 0)
    {
        s1[j + i] = s2[i];
        i--;
    }
    return (s1);
}