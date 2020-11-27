/**
locates the first occurrence of the null-terminated string needle in the string
haystack, where not more than len characters are searched.  Characters that appear after a `\0' charac-
ter are not searched.  Since the strnstr() function is a FreeBSD specific API, it should only be used
when portability is not a concern.
**/

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
    size_t  i;
  
    i = 0;
    if (!needle)
        return ((char *)haystack);
    while (haystack && i < n)
    {
        if (ft_strncmp(haystack, needle, ft_strlen(needle)) == 0)
            return ((char *)haystack);
        haystack++;
        i++;
    }
    return (NULL);

}