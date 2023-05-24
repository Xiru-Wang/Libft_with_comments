/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwang <xiwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 19:40:32 by xiwang            #+#    #+#             */
/*   Updated: 2023/05/24 18:39:03 by xiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The substring begins at index ’start’ and is of maximum size ’len’.
sub ---> a new string
*/

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (start >= s_len)// start position is >= strlen(s), overlap part might be '\0', return an empty string
	{
		sub = malloc(1);
		if (sub)
			*sub = 0;// Null Character NOT null pointer
		return (sub);
	}
	if (len + start > s_len)//if (start + len) is out of range, which means part of s = sub
		len = s_len - start;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	ft_strlcpy(sub, s + start, len + 1);// copy from the position of (s+start), destsize = len + 1
	return (sub);
}
