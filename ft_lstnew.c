/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiruwang <xiruwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:10:34 by xiwang            #+#    #+#             */
/*   Updated: 2023/05/22 17:33:05 by xiruwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
1. Allocates and returns a new node.
2. new node -> content = parameter 'content'
3. 'next' is initialized to NULL.
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(*new_node));// a pointer to store memorry address
	if (new_node == NULL)//if malloc failed
		return (NULL);//return a NULL pointer
	new_node->content = content; //equal to (*new_node).content: assign content to data field of the node
	new_node->next = NULL;		 //equal to (*new_node).next:initialize pointer field of the node to NULL
	return (new_node);
}

/*int main(void)
{
	char *str = "Hello, world!";
	t_list *node = ft_lstnew(str);

	if (node != NULL)
	{
		printf("Content: %s\n", (char *)node->content);
		printf("Next: %p\n", node->next);
	}
	else
	{
		printf("Failed to create a new node.\n");
	}

	free(node);
	return 0;
}
*/
