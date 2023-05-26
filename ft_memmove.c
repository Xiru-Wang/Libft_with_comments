/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiruwang <xiruwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:53:26 by xiwang            #+#    #+#             */
/*   Updated: 2023/05/26 11:11:38 by xiruwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

//处理了源和目标内存区域的重叠情况，适用于处理可能重叠的内存复制。

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!d && !s)//NOT (!d || !s)
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

// int main()
// {
// 	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// 	int i = 0;

// 	ft_memmove(arr + 2, arr, 8 * sizeof(int));
// 	while (i < 8)
// 	{
// 		printf("%d", arr[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);//12123456
// }

int main()
{
	const char src[50] = "gentlebattle.com";
	//const char src[50];
	char dest[50] = "hello,world";
	//char dest[50];


	printf("Before memmove dest = %s\n", dest);
	printf("After ft_memmove dest = %s\n", (char *)ft_memmove(dest, src, 5));
	printf("After memmove dest = %s\n", (char *)memmove(dest, src, 5));

	return (0);
}
