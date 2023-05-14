/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiruwang <xiruwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:52:23 by xiwang            #+#    #+#             */
/*   Updated: 2023/05/14 18:28:13 by xiruwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!d && !s)
		return (NULL);
	while (n--)
		*d++ = *s++;
	return (dst);
}

/*int main()
{
	const char src[50] = "gentlebattle.com";
	char dest[50] = "hello,world";

	printf("Before memcpy dest = %s\n", dest);
	printf("After ft_memcpy dest = %s\n", (char *)ft_memcpy(dest, src, 5));
	printf("After memcpy dest = %s\n", (char *)memcpy(dest, src, 5));

	return (0);
}
//if (!d || !s) WRONG
*/

/*int main()
{

	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i = 0;

	ft_memcpy(arr + 2, arr, 20);
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return (0);
}*/
