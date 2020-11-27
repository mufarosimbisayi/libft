/**
Allocates (with malloc(3)) and returns a “fresh” memory area.
The memory allocated is initialized to 0. If the alloca- tion fails, the function returns NULL.
**/

#include "libft.h"

void    *ft_memalloc(size_t size)
{
    void    *ptr;

    ptr = malloc(size);
    if (ptr == NULL)
        return (NULL);
    return (ft_memset(ptr, 0, size));
}