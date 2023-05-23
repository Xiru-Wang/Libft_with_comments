/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiruwang <xiruwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:53:26 by xiwang            #+#    #+#             */
/*   Updated: 2023/05/23 12:29:13 by xiruwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!d && !s)
		return (NULL);
	if (d > s)
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];//copy from behind to avoid data loss(if there's overlap)
			len--;
		}
	}
	else
	{
		while (len--)
			*d++ = *s++;
	}
	return (dst);
}

/*int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i = 0;

	ft_memmove(arr + 2, arr, 5);
	// memmove(arr + 2, arr, 5);
	while (i < 5)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return (0);
}*/
