/** function copies bytes from string src to string dst.  If the character c (as converted to
     an unsigned char) occurs in the string src, the copy stops and a pointer to the byte after the copy of
c in the string dst is returned.  Otherwise, n bytes are copied, and a NULL pointer is returned. **/

#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        ft_memcpy(dest + i, src + i, 1);
        if (((unsigned char*)src)[i] == (unsigned char)c)
            return (dest + i + 1);
    }
    return (NULL);
}