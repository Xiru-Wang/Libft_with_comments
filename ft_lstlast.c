/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiruwang <xiruwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 18:22:32 by xiwang            #+#    #+#             */
/*   Updated: 2023/05/19 18:39:47 by xiruwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	if (lst == NULL)//empty list， lst 是指向链表的头节点的指针
		return (NULL);
	while (lst -> next != NULL)
		lst = lst->next;//lst 被用来遍历链表。每次迭代，lst 都会被设置为它当前所指向的节点的 next 节点，即链表中的下一个节点。这个循环将持续进行，直到 lst 指向的节点没有 next 节点，即 lst 指向链表的最后一个节点。
	return (lst);
}
