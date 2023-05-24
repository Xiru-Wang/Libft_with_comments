/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwang <xiwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:09:19 by xiwang            #+#    #+#             */
/*   Updated: 2023/05/23 18:18:38 by xiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	unsigned int i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1); //write(int fd, const void *buf, size_t count);
		i++;
	}
}

// int	main(void)
// {
// 	ft_putstr_fd("file descriptor?", 0);

// 	return 0;
// }
