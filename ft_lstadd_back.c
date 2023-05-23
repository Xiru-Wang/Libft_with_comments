/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiruwang <xiruwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:24:00 by xiwang            #+#    #+#             */
/*   Updated: 2023/05/23 10:53:47 by xiruwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
1. find the last node
2. let pointer field of that node point to new
Learn more:
https://www.youtube.com/watch?v=90zyJ1eVeUw*/

void	ft_lstadd_back(t_list **lst, t_list *new)//**lst: a pointer to head pointer, bc we want to update head pointer
//**lst is local to this function, *lst will reflect on the int main function
{
	t_list	*temp;//to go thru the link without losing head

	if (lst == NULL || new == NULL)//understand it as Null list||Null node
		return;//do nothing
	if (*lst == NULL)//the head of the list, if the list is empty
		*lst = new;//new became 1st node
	else
	{
		temp = *lst;
		while (temp->next != NULL)//After each iteration, temp is updated to point to the next node.
			temp = temp -> next;//When the loop ends, temp points to the last node in the list.
		temp -> next = new;// makes the pointer field of the last node (temp) point to the new node
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
