/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiwang <xiwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 20:29:35 by xiwang            #+#    #+#             */
/*   Updated: 2023/05/10 20:53:20 by xiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	new = malloc(sizeof(char) * len);
	if (!new || !s1 || !s2)
		return (NULL);
	//if (*s1) wrong
	ft_strlcpy(new, s1, len);//not ft_len(s1)+1
	//if (*s2) wrong
	ft_strlcat(new, s2, len);////not ft_len(s1)+1
	return (new);
}
