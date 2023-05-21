/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwang <xiwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:39:27 by xiwang            #+#    #+#             */
/*   Updated: 2023/05/21 16:02:01 by xiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
lst: The address of head pointer.
new: The address of a pointer to the node to be
added to the list.//pointer to the new node
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return;
	new->next = *lst;//point to what head pointes to
	*lst = new;//let head point to new(break the link between head & previous first node)
}

/*t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

int	ft_lstsize(t_list *lst)
{
	unsigned int i;

	i = 0;
	while(lst)
	{
		i++;
		lst = lst -> next;
	}
	return (i);
}

int	main(void)
{
	t_list *head = NULL;
	t_list *new_node, *temp;

	new_node = ft_lstnew("node 1");
	ft_lstadd_front(&head, new_node);

	new_node = ft_lstnew("node 2");
	ft_lstadd_front(&head, new_node);

	new_node = ft_lstnew("node 3");
	ft_lstadd_front(&head, new_node);

	printf("nodes in the list: %d\n", ft_lstsize(head));

	new_node = head;//reset to the start of the list
	while (new_node)//will not print node 1: new_node -> next != NULL
	{
		printf("%s\n", (char *)new_node -> content);
		temp = new_node;//save current node
		new_node = new_node -> next;//move to next node
		free(temp);//free current node
	}

	return 0;
}
*/
