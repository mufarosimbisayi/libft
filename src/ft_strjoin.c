/**
Allocates (with malloc(3)) and returns a “fresh” string end- ing with ’\0’,
result of the concatenation of s1 and s2. If the allocation fails the
function returns NULL.
**/

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *ptr;

    ptr = (char *)ft_memalloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (ft_strcpy(ptr, s1) && ft_strcat(ptr, s2))
        return (ptr);
    return (NULL);
}