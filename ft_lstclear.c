/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiruwang <xiruwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:25:14 by xiwang            #+#    #+#             */
/*   Updated: 2023/05/26 11:19:56 by xiruwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
1. Deletes and frees the given node and every successor of that node,
2. Finally, the pointer to the list must be set to NULL.
*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;// create a local pointer temp, so we can alter *lst

	if (!lst || !del)//no node to clear or no f to apply
		return;//do nothing
	while (*lst)
	{
		temp = (*lst) -> next;//link temp with 2rd node
		ft_lstdelone(*lst, del);//del and free 1st node(incl.its content)
		*lst = temp;//update what head points to
	}
	*lst = NULL;//after del all, set the head pointer to NULL
}
