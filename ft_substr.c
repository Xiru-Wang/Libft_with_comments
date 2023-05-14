/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiruwang <xiruwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 19:40:32 by xiwang            #+#    #+#             */
/*   Updated: 2023/05/14 19:41:38 by xiruwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> //for malloc
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (start >= s_len)
	{
		sub = malloc(1);
		if (sub)
			*sub = 0;
		return (sub);
	}
	if (len + start > s_len)
		len = s_len - start;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
