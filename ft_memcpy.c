/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiruwang <xiruwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:52:23 by xiwang            #+#    #+#             */
/*   Updated: 2023/05/23 12:34:51 by xiruwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

/*
1. we can NOT dereference a void pointer
2. Posibble mistake: *dst++ / *src++ will lost the start of block of mem
在进行 *dst++ 或 *src++ 这样的操作时，我们将改变 dst 和 src 的值，使其在函数返回时指向内存块的尾部，而不是头部，
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;//创建辅助指针来改变内存位置
	s = (unsigned char *)src;
	if (!d && !s)// (!d || !s) won't pass the test, still dont understand WHY..
		return (NULL);
	while (n--)
		*d++ = *s++;
	return (dst);//return original dst
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
