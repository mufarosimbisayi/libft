/**
Takes as a parameter the address of a memory area that needs to
 be freed with free(3), then puts the pointer to NULL.
**/

#include "libft.h"

void    ft_memdel(void **ap)
{
    free(*ap);
    *ap = NULL;
}