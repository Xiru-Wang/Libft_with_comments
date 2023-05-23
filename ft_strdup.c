/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiruwang <xiruwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:54:44 by xiwang            #+#    #+#             */
/*   Updated: 2023/05/22 22:03:25 by xiruwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ret;
	size_t	len;

	len = ft_strlen(s) + 1;
	ret = (char *)malloc(len * sizeof(char));
	if (ret == NULL)
		return (NULL);
	ft_strlcpy(ret, s, len);
	return (ret);
}
