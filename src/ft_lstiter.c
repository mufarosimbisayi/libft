/**
Iterates the list lst and applies the function f to each link.
**/

#include "libft.h"

void    ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
    while (lst)
    {
        f(lst);
        lst = lst->next;
    }
}