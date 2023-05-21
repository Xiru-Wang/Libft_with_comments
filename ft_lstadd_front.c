/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiruwang <xiruwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:39:27 by xiwang            #+#    #+#             */
/*   Updated: 2023/05/21 13:39:50 by xiruwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
lst: The address of head pointer.
new: The address of a pointer to the node to be
added to the list.//pointer to the new node
*/
void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return;
	new->next = *lst;//assign the value in head to new->next,
	*lst = new;//head指向新节点
}
/*
本来head指向A， C出现先拿走A的地址，指向A， 再让head指向自己
插入
断了head和A的link
*/
