/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwang <xiwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 19:40:32 by xiwang            #+#    #+#             */
/*   Updated: 2023/05/10 20:27:18 by xiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> //for malloc
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (*s == 0)
		return (0);
	if (start >= s_len)//start from 0, start = s_len = '\0'
	{
		sub = malloc(1);
		if (sub)//allocate successful
			*sub = 0;
		return (sub);
	}
	if (len + start > s_len)
		len = s_len - start;//cut things behind
	sub = malloc(sizeof(char) * (len + 1));
	if (sub == NULL)// NOT *sub == 0, malloc fails, return a NULL pointer.
		return (0);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
