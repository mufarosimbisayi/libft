/** function copies n bytes from memory area src to memory area dst.  If dst and src overlap, behavior is undefined **/

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    ((unsigned char *)dest)[n] = '\0';
    while (n--)
    {
        ((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
    }
    return (dest);
}