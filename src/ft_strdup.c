/**
function allocates sufficient memory for a copy of the string s1, does the copy, and
**returns a pointer to it
**/

#include "libft.h"

char    *ft_strdup(const char *s1)
{
    size_t i;
    char *ptr;

    i = ft_strlen(s1);
    ptr = (char *)malloc(i + 1);
    while (i--)
    {
        ptr[i] = s1[i];
    }
    return (ptr);
}