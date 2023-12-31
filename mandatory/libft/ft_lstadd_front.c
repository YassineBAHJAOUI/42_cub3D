
#include "../headers/libft.h"

/**
 * Adds a new element to the beginning of a linked list.
 *
 * @param lst The address of a pointer to the first element of the list.
 * @param new The element to be added.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}
