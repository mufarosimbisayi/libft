/**
Allocates (with malloc(3)) and returns a “fresh” string end- ing with ’\0’.
Each character of the string is initialized at ’\0’.
If the allocation fails the function returns NULL.
**/

#include "libft.h"

char    *ft_strnew(size_t size)
{
    char    *ptr;

    ptr = (char*)ft_memalloc(size);
    if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, (int)'\0', size + 1);
	return (ptr);
}