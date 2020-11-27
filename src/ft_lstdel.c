/**
Takes as a parameter the adress of a pointer to a link and 
frees the memory of this link and every successors of 
that link using the functions del and free(3). Finally 
the pointer to the link that was just freed must 
be set to NULL (quite similar to the function ft_memdel 
from the mandatory part).
**/

#include "libft.h"

void    ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
    t_list  *ls;

    ls = (*alst)->next;
    while (ls)
    {
        ft_lstdelone(alst, del);
        alst = &ls;
        ls = (*alst)->next;
    }
}