/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwang <xiwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:10:34 by xiwang            #+#    #+#             */
/*   Updated: 2023/05/17 19:27:17 by xiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *new_node;

	new_node = (t_list *)malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);
	new_node->content = content; //(*new_node).content
	new_node->next = NULL;		 //(*new_node).next
	return (new_node);
}

int main(void)
{
	char *str = "Hello, world!";
	t_list *node = ft_lstnew(str);

	if (node != NULL)
	{
		printf("Content: %s\n", (char *)node->content);
		printf("Next: %p\n", (void *)node->next);
	}
	else
	{
		printf("Failed to create a new node.\n");
	}

	free(node);
	return 0;
}

/*
-> [member access operator]
operator is used to access the members of the object pointed to by the pointer.
*/
