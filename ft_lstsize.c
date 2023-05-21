/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiruwang <xiruwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 18:21:49 by xiwang            #+#    #+#             */
/*   Updated: 2023/05/19 15:50:39 by xiruwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)//The beginning of the list.
{
	unsigned int	i;

	i = 0;
	while(lst -> next != NULL)//traverse using head pointer
	{
		lst = lst -> next;//move to the next node
		i++;
	}
	return (i);
}
