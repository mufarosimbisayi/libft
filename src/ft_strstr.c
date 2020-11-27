/**
locates the first occurrence of the null-terminated string needle in the null-
terminated string haystack.
**/

#include "libft.h"

char    *ft_strstr(const char *haystack, const char *needle)
{
    char    *ptr;
  
    ptr = ft_strchr(haystack, (char)needle[0]);
    if (!needle)
        return ((char *)haystack);
    while (*ptr != '\0')
    {
        if (ft_strncmp(haystack, ptr, ft_strlen(needle)) == 0)
            return (ptr);
        ptr++;
    }
    return (NULL);

}