/**
Iterates a list lst and applies the function f to 
each link to create a “fresh” list (using malloc(3))
 resulting from the suc- cessive applications of f.
 If the allocation fails, the function returns NULL.
**/

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
    t_list  *new;
    t_list  *rtrn;

    if(!lst)
        return (NULL);
    new = f(lst);
    rtrn = new;
    while (new)
    {
        lst = lst->next;
        if (!(new->next = f(lst)))
        {
            free(new->next);
            new->next = NULL;
        }
        new = new->next;
    }
    return (rtrn);
}