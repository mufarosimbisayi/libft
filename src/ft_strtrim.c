/**
Allocates (with malloc(3)) and returns a copy of the string given
as argument without whitespaces at the beginning or at the end of the string.
Will be considered as whitespaces the following characters ’ ’, ’\n’ and ’\t’.
If s has no whites- paces at the beginning or at the end, the function
returns a copy of s. If the allocation fails the function returns NULL
**/

#include "libft.h"

char    *ft_strtrim(char const *s)
{
    char    *ptr;
    int     i;
    int     j;
    size_t     k;

    i = 0;
    j = ft_strlen(s) - 1;
    k = ft_strlen(s) + 1;
    while (k--)
    {
        if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
            i++;
        if (s[j] != ' ' && s[j] != '\n' && s[j] != '\t')
            j--;
    }
    ptr = ft_strsub(s, i, ft_strlen((const char*)s) - j - i);
    if (ptr == NULL)
        return (NULL);
    return (ptr);
}