/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwang <xiwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:24:00 by xiwang            #+#    #+#             */
/*   Updated: 2023/05/21 18:24:03 by xiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)//**lst: a pointer to head pointer of lst
{
	t_list *temp;//to go thru the link without losing head

	if (lst == NULL || new == NULL)//understand it as Null list||Null node
		return;//do nothing
	if (*lst == NULL)//the head of the list, if the list is empty
		*lst = new;//new became 1st node
	else
	{
		temp = *lst;
		while (temp->next != NULL)//After each iteration, temp is updated to point to the next node.
			temp = temp -> next;//arrived the last node, When the loop ends, temp points to the last node in the list.
		temp -> next = new;// makes the next field of the last node (temp) point to the new node
	}
}

/*t_list	*ft_lstnew(void *data)
{
	t_list	*node = (t_list *)malloc(sizeof(t_list));

	if (!node)
		return NULL;
	node -> content = data;
	node -> next = NULL;
	return node;
}

int	main(void)
{
	t_list *head = NULL;
	t_list *new_node, *temp;

	new_node = ft_lstnew("node 1");
	ft_lstadd_back(&head, new_node);
	new_node = ft_lstnew("node 2");
	ft_lstadd_back(&head, new_node);
	new_node = ft_lstnew("node 3");
	ft_lstadd_back(&head, new_node);

	new_node = head;//reset to the start of the list
	while (new_node)//will not print node 1: new_node -> next != NULL
	{
		printf("%s\n", (char *)new_node -> content);
		temp = new_node;//save current node
		new_node = new_node -> next;//move to next node
		free(temp);//free current node
	}
	return 0;
}*/
