/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xiruwang <xiruwang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:52:23 by xiwang            #+#    #+#             */
/*   Updated: 2023/05/26 11:11:12 by xiruwang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

/*
1. we can NOT dereference a void pointer
2. Posibble mistake: *dst++ /
将src指针指向的内存区域的内容复制到dest指针指向的内存区域，复制的字节数由n指定。
注意事项：没有对源和目标内存区域的重叠进行处理，使用时需要确保没有内存重叠。
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;// so we wont change the start of the dst
	s = (unsigned char *)src;
	if (!d && !src)
	// NOT (!d || !s), if s == 0, still copy; if d == 0, copy.
	//it's mem regardless it content
		return (NULL);
	while (n--)
		*d++ = *s++;
	return (dst);//return original dst
}

// int main()
// {
// 	//const char src[50] = "gentlebattle.com";
// 	const char src[50];
// 	//char dest[50] = "hello,world";
// 	char dest[50];


// 	printf("Before memcpy dest = %s\n", dest);
// 	printf("After ft_memcpy dest = %s\n", (char *)ft_memcpy(dest, src, 5));
// 	printf("After memcpy dest = %s\n", (char *)memcpy(dest, src, 5));

// 	return (0);
// }
//if (!d || !s) WRONG


int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i = 0;

	ft_memcpy(arr + 2, arr, 8 * sizeof(int));
	while (i < 8)
	{
		printf("%d", arr[i]);
		i++;
	}
	printf("\n");
	return (0);//12121212
}
