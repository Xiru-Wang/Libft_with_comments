/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwang <xiwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 18:22:32 by xiwang            #+#    #+#             */
/*   Updated: 2023/05/17 19:26:43 by xiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	while(lst)
	{
		if(lst -> next == NULL)// reach the last node
			return	(lst);
		lst = lst -> next;
	}
	return	(lst);// if list is empty, return null
}

/*the function will traverse the list until it finds a node
where next is NULL. That's the last node in the list,
and the function returns that node. If the list is empty
(i.e., lst is NULL to begin with), the function will return NULL.*/
