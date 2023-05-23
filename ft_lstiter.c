/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiruwang <xiruwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:24:57 by xiwang            #+#    #+#             */
/*   Updated: 2023/05/22 21:56:53 by xiruwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
1. Iterates the list ’lst’
2. applies the function ’f’ on content field of each node
No change for head pointer, so we dont need another temp to loop thru
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{

	if (lst == NULL || f == NULL)//do nothing if node is null or func pointer is null
		return;
	while (lst)//(lst != NULL)
	{
		f(lst->content);//applies the function ’f’ on the content of each node.
		lst = lst->next;//move to the next node
	}
}

/*t_list	*ft_lstnew(void *data)//can only receive a pointer parameter
{
	t_list	*node = (t_list *)malloc(sizeof(t_list));

	if (!node)
		return NULL;
	node -> content = data;
	node -> next = NULL;
	return node;
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *temp;

	if (lst == NULL || new == NULL)
		return;
	if (*lst == NULL)
		*lst = new;
	else
	{
		temp = *lst;
		while (temp->next != NULL)
			temp = temp -> next;
		temp -> next = new;
	}
}

void print(void *content)
{
	printf("%s\n", (char *)content);
}

int	main(void)
{
	t_list *head = NULL;
	t_list *new_node, *temp;

	new_node = ft_lstnew("hello");
	ft_lstadd_back(&head, new_node);
	new_node = ft_lstnew("zhaocai");
	ft_lstadd_back(&head, new_node);
	new_node = ft_lstnew("he is a boy,");
	ft_lstadd_back(&head, new_node);
	new_node = ft_lstnew("and a cat.");
	ft_lstadd_back(&head, new_node);

	new_node = head;
	while (new_node)
	{
		print(new_node->content);
		temp = new_node;
		new_node = new_node -> next;
		free(temp);
	}
	return 0;
}*/
