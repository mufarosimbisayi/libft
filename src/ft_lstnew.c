/**
Allocates (with malloc(3)) and returns a “fresh” link. 
The variables content and content_size of the new link are ini- tialized 
by copy of the parameters of the function. If the pa- rameter 
content is nul, the variable content is initialized to NULL and the 
variable content_size is initialized to 0 even if the parameter 
content_size isn’t. The variable next is initialized to NULL. 
If the allocation fails, the function returns NULL.
**/

#include "libft.h"

t_list  *ft_lstnew(void const *content, size_t content_size)
{
    t_list  *ls;

    ls = ft_memalloc(sizeof(t_list));
    if (ls)
    {
        ls->content = (void *)content;
        ls->size = content_size;
        ls->next = NULL;
    }
    return (ls);
}