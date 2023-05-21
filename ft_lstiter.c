#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *temp;

	if (lst == NULL || f == NULL)
		return;
	temp = lst;
	while (temp->next != NULL)
	{
		f(temp->content);
		temp = temp->next;
	}
}
