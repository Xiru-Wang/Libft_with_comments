/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwang <xiwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:10:34 by xiwang            #+#    #+#             */
/*   Updated: 2023/05/21 17:06:43 by xiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates (with malloc(3)) and returns a new node.
The member variable ’content’ is initialized with
the value of the parameter ’content’. The variable
’next’ is initialized to NULL.
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(*new_node));// a pointer to store memorry address
	if (new_node == NULL)//if malloc failed
		return (NULL);//return a NULL pointer
	new_node->content = content; //==(*new_node).content， assign content to data field of the node
	new_node->next = NULL;		 //(*new_node).next, initialize pointer field of the node to NULL
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
