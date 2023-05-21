/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwang <xiwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 18:21:49 by xiwang            #+#    #+#             */
/*   Updated: 2023/05/21 15:13:43 by xiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)//The beginning of the list.
{
	unsigned int	i;

	i = 0;
	while(lst)
	{
		lst = lst -> next;//move to the next node
		i++;
	}
	return (i);
}
