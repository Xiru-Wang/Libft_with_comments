/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwang <xiwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:24:57 by xiwang            #+#    #+#             */
/*   Updated: 2023/05/21 18:25:00 by xiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	//t_list *temp; not the head pointer, can alter

	if (lst == NULL || f == NULL)
		return;
	//temp = lst;
	while (lst)
	{
		f(lst->content);//applies the function ’f’ on the content of each node.
		lst = lst->next;//iterate the list
	}
}
